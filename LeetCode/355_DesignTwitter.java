import java.time.Instant;
import java.util.*;

class Twitter {

	private static final int FEED_SIZE = 10;

	private final Map<Integer, Set<Integer>> followers;
	private final Map<Integer, Set<Tweet>> tweets;

	public Twitter() {
		followers = new HashMap<>();
		tweets = new HashMap<>();
	}

	public void postTweet(int userId, int tweetId) {
		TwitterActions.postTweet(tweets, new User(userId), tweetId);
	}

	public List<Integer> getNewsFeed(int userId) {
		return TwitterActions.getNewsFeed(tweets, followers, new User(userId));
	}

	public void follow(int followerId, int followeeId) {
		TwitterActions.follow(followers, new User(followerId), new User(followeeId));
	}

	public void unfollow(int followerId, int followeeId) {
		TwitterActions.unfollow(followers, new User(followerId), new User(followeeId));
	}

	private record User(int userId) {

	}

	private record Tweet(int tweetId, Instant timestamp) implements Comparable<Tweet> {

		@Override
		public int compareTo(Tweet other) {
			return this.timestamp.compareTo(other.timestamp);
		}

		@Override
		public boolean equals(Object o) {
			if (this == o) return true;
			if (o == null || getClass() != o.getClass()) return false;
			Tweet tweet = (Tweet) o;
			return tweetId == tweet.tweetId && timestamp.equals(tweet.timestamp);
		}

	}

	private static class TwitterActions {

		public static void postTweet(Map<Integer, Set<Tweet>> tweets, User user, int tweetId) {
			Tweet tweet = new Tweet(tweetId, Instant.now());
			tweets.computeIfAbsent(user.userId(), k -> new TreeSet<>()).add(tweet);
		}

		public static List<Integer> getNewsFeed(Map<Integer, Set<Tweet>> tweets, Map<Integer, Set<Integer>> followers, User user) {
			Set<Tweet> newsFeed = new TreeSet<>(Comparator.reverseOrder());
			Set<Tweet> userTweets = tweets.getOrDefault(user.userId(), new TreeSet<>());
			newsFeed.addAll(userTweets);
			Set<Integer> followees = followers.getOrDefault(user.userId(), new HashSet<>());
			for (int followee : followees) {
				Set<Tweet> followeeTweets = tweets.getOrDefault(followee, new TreeSet<>());
				newsFeed.addAll(followeeTweets);
			}
			List<Integer> result = new ArrayList<>();
			int count = 0;
			for (Tweet tweet : newsFeed) {
				result.add(tweet.tweetId());
				count++;
				if (count == FEED_SIZE) {
					break;
				}
			}

			return result;
		}

		public static void follow(Map<Integer, Set<Integer>> followers, User follower, User followee) {
			followers.computeIfAbsent(follower.userId(), k -> new HashSet<>()).add(followee.userId());
		}

		public static void unfollow(Map<Integer, Set<Integer>> followers, User follower, User followee) {
			followers.computeIfPresent(follower.userId(), (k, v) -> {
				v.remove(followee.userId());
				return v;
			});
		}

	}

}
