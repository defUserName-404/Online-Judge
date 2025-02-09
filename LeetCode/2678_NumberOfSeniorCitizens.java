import java.util.Arrays;

class Solution {
	public int countSeniors(String[] details) {
		return (int) Arrays.stream(details).filter(detail -> {
			String age = detail.substring(11, 13);
			return Integer.parseInt(age) > 60;
		}).count();
	}
}