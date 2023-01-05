import java.util.HashMap;
import java.util.Map;

class Solution {

    public int romanToInt(String givenValue) {
		Map<Character, Integer> roman = new HashMap<Character, Integer>() { {
				put('I', 1);
				put('V', 5);
				put('X', 10);
				put('L', 50);
				put('C', 100);
				put('D', 500);
				put('M', 1000);
			}
		};

		int ans = 0;

		for (int i = 0; i < givenValue.length(); i++) {
			if (i < givenValue.length() - 1 && roman.get(givenValue.charAt(i)) < roman.get(givenValue.charAt(i + 1)))
				ans -= roman.get(givenValue.charAt(i));
			else
				ans += roman.get(givenValue.charAt(i));
		}

		return ans;
    }

}
