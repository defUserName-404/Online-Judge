import java.time.Instant;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;

class Twitter {

	private Map<Integer, List<Integer>> followersOfUser;
	private Map<Integer, List<Tweet>> tweetsOnNewsfeedOfUser;

	public Twitter() {
		followersOfUser = new HashMap<>();
		tweetsOnNewsfeedOfUser = new TreeMap<>();
	}

	public void postTweet(int userId, int tweetId) {
		Tweet tweet = new Tweet(userId, tweetId, Instant.now());
		tweetsOnNewsfeedOfUser.computeIfAbsent(userId, k -> new ArrayList<>());
		tweetsOnNewsfeedOfUser.get(userId).add(tweet);
		List<Integer> followers = followersOfUser.get(userId);
		if (followers != null) {
			for (int followerId : followers) {
				tweetsOnNewsfeedOfUser.computeIfAbsent(followerId, k -> new ArrayList<>());
				tweetsOnNewsfeedOfUser.get(followerId).add(tweet);
			}
		}
	}

	public List<Integer> getNewsFeed(int userId) {
		List<Integer> tweetsOnNewsfeed = new ArrayList<>();
		int count = 0;
		for (Tweet tweet : tweetsOnNewsfeedOfUser.get(userId)) {
			tweetsOnNewsfeed.add(tweet.getTweetId());
			count++;
			if (count == 10)
				break;
		}

		return tweetsOnNewsfeed;
	}

	public void follow(int followerId, int followeeId) {
		followersOfUser.computeIfAbsent(followerId, k -> new ArrayList<>());
		followersOfUser.get(followerId).add(followeeId);
	}

	public void unfollow(int followerId, int followeeId) {
		List<Integer> followers = followersOfUser.get(followerId);
		if (followers != null) {
			followers.removeIf(id -> id == followeeId);
		}
	}

}

class User {

	private final int userId;

	public User(int userId) {
		this.userId = userId;
	}

	public int getUserId() {
		return userId;
	}

}

class Tweet implements Comparable<Tweet> {

	private final int tweetId;
	private final Instant timestamp;

	public Tweet(int userId, int tweetId, Instant timestamp) {
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
		return other.timestamp.compareTo(this.timestamp);
	}

}

class TwitterActions {

	public Map<Integer, List<Integer>> follow(int followerId, int followeeId,
			Map<Integer, List<Integer>> followersOfUser) {
		followersOfUser.computeIfAbsent(followerId, k -> new ArrayList<>());
		followersOfUser.get(followerId).add(followeeId);
		return followersOfUser;
	}

}

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter obj = new Twitter();
 * obj.postTweet(userId,tweetId);
 * List<Integer> param_2 = obj.getNewsFeed(userId);
 * obj.follow(followerId,followeeId);
 * obj.unfollow(followerId,followeeId);
 */
