class Solution {

    public String shortestCompletingWord(String licensePlate, String[] words) {
        int[] count = new int[26];
        for (final char c : licensePlate.toCharArray()) {
            if (Character.isLetter(c)) {
                count[Character.toLowerCase(c) - 'a']++;
            }
        }
        String result = "";
        int min = Integer.MAX_VALUE;
        for (String word : words) {
            int[] c = new int[26];
            for (final char ch : word.toCharArray()) {
                c[ch - 'a']++;
            }
            for (int i = 0; i < 26; i++) {
                if (c[i] < count[i]) {
                    break;
                }
                if (i == 25) {
                    if (word.length() < min) {
                        min = word.length();
                        result = word;
                    }
                }
            }
        }
        return result;
    }
}