import java.time.Instant;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import java.util.Set;
import java.util.TreeSet;

class Twitter {

	private static final int FEED_SIZE = 10;

	private Map<Integer, Set<Integer>> followers;
	private Map<Integer, Set<Tweet>> tweets;

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

	private static class User {
		private int userId;

		User(int userId) {
			this.userId = userId;
		}

		public int getUserId() {
			return userId;
		}
	}

	private static class Tweet implements Comparable<Tweet> {

		private int tweetId;
		private Instant timestamp;

		Tweet(int tweetId, Instant timestamp) {
			this.tweetId = tweetId;
			this.timestamp = timestamp;
		}

		public int getTweetId() {
			return tweetId;
		}

		public Instant getTimestamp() {
			return timestamp;
		}

		@Override
		public int compareTo(Tweet other) {
			return this.timestamp.compareTo(other.timestamp);
		}

		@Override
		public boolean equals(Object o) {
			if (this == o)
				return true;
			if (o == null || getClass() != o.getClass())
				return false;
			Tweet tweet = (Tweet) o;
			return tweetId == tweet.tweetId &&
					timestamp.equals(tweet.timestamp);
		}

		@Override
		public int hashCode() {
			return Objects.hash(tweetId, timestamp);
		}

	}

	private static class TwitterActions {

		public static void postTweet(Map<Integer, Set<Tweet>> tweets, User user, int tweetId) {
			Tweet tweet = new Tweet(tweetId, Instant.now());
			tweets.computeIfAbsent(user.getUserId(), k -> new TreeSet<>()).add(tweet);
		}

		public static List<Integer> getNewsFeed(Map<Integer, Set<Tweet>> tweets,
				Map<Integer, Set<Integer>> followers, User user) {
			Set<Tweet> newsFeed = new TreeSet<>(Comparator.reverseOrder());
			Set<Tweet> userTweets = tweets.getOrDefault(user.getUserId(), new TreeSet<>());
			newsFeed.addAll(userTweets);
			Set<Integer> followees = followers.getOrDefault(user.getUserId(), new HashSet<>());
			for (int followee : followees) {
				Set<Tweet> followeeTweets = tweets.getOrDefault(followee, new TreeSet<>());
				newsFeed.addAll(followeeTweets);
			}
			List<Integer> result = new ArrayList<>();
			int count = 0;
			for (Tweet tweet : newsFeed) {
				result.add(tweet.getTweetId());
				count++;
				if (count == FEED_SIZE) {
					break;
				}
			}

			return result;
		}

		public static void follow(Map<Integer, Set<Integer>> followers, User follower, User followee) {
			followers.computeIfAbsent(follower.getUserId(), k -> new HashSet<>()).add(followee.getUserId());
		}

		public static void unfollow(Map<Integer, Set<Integer>> followers, User follower, User followee) {
			followers.computeIfPresent(follower.getUserId(), (k, v) -> {
				v.remove(followee.getUserId());
				return v;
			});
		}
	}

}