import java.util.HashMap;
import java.util.Map;

class Solution {

	public String decodeMessage(String key, String message) {
		Map<Character, Character> keyMap = new HashMap<>();
		char currentCharacter = 'a';

		for (char ch : key.toCharArray()) {
			if (ch != ' ' && !keyMap.containsKey(ch)) {
				keyMap.put(ch, currentCharacter);
				currentCharacter++;
			}
		}

		StringBuilder decodedMessage = new StringBuilder();

		for (char ch : message.toCharArray()) {
			if (ch != ' ')
				ch = keyMap.get(ch);

			decodedMessage.append(ch);
		}

		return decodedMessage.toString();
    }
}