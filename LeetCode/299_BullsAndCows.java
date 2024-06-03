import java.util.HashMap;
import java.util.Map;

/*
* You are playing the Bulls and Cows game with your friend.

* You write down a secret number and ask your friend to guess what the number is. When your friend makes a guess, you provide a hint with the following info:
* - The number of "bulls", which are digits in the guess that are in the correct position.
* - The number of "cows", which are digits in the guess that are in your secret number but are located in the wrong position. Specifically, the non-bull digits in the guess that could be rearranged such that they become bulls.
? Given the secret number secret and your friend's guess guess, return the hint for your friend's guess.

! The hint should be formatted as "xAyB", where x is the number of bulls and y is the number of cows. Note that both secret and guess may contain duplicate digits.
 */

class Solution {

	public String getHint(String secret, String guess) {
		int n = secret.length();
		Map<Character, Integer> secretCount = new HashMap<>();
		int bulls = 0, cows = 0;
		for (int i = 0; i < n; i++) {
			char s = secret.charAt(i);
			char g = guess.charAt(i);
			if (s == g) {
				bulls++;
			} else {
				secretCount.put(s, secretCount.getOrDefault(s, 0) + 1);
			}
		}
		for (int i = 0; i < n; i++) {
			char s = secret.charAt(i);
			char g = guess.charAt(i);
			if (s != g && secretCount.containsKey(g) && secretCount.get(g) > 0) {
				cows++;
				secretCount.put(g, secretCount.get(g) - 1);
			}
		}
		return bulls + "A" + cows + "B";
	}

}
