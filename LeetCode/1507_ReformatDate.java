class Solution {

	public String reformatDate(String date) {
		String[] dateInGivenFormat = date.split(" ");

		String day = parseDay(dateInGivenFormat[0]);
		String month = parseMonth(dateInGivenFormat[1]);
		String year = dateInGivenFormat[2];

		return year + "-" + month + "-" + day;
	}

	private String parseDay(String day) {
		char second = day.charAt(1);

		return (second >= '0' && second <= '9')
			? day.substring(0, 2)
			: "0" + day.charAt(0);
	}

	private String parseMonth(String month) {
		final String[] months = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
								 "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
		};

		StringBuilder monthNo = new StringBuilder();

		for (int i = 0; i < months.length; i++) {
			if (month.equals(months[i])) {
				if (i < 9) {
					monthNo.append('0');
				}
				monthNo.append(i + 1);
			}
		}

		return String.valueOf(monthNo);
	}

}
