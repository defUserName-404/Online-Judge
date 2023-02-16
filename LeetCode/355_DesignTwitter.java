import java.util.List;

class Twitter {

	public Twitter() {

	}

	public void postTweet(int userId, int tweetId) {

	}

	public List<Integer> getNewsFeed(int userId) {
		return null;
	}

	public void follow(int followerId, int followeeId) {

	}

	public void unfollow(int followerId, int followeeId) {

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

class Tweet {

	private final int tweetId;

	public Tweet(int tweetId) {
		this.tweetId = tweetId;
	}

	public int getTweetId() {
		return tweetId;
	}
}

class TwitterAction {


}