public class ReformatDate_1507 {
	private String parseDay(String day) {
		char first = day.charAt(0);
		char second = day.charAt(1);

		StringBuilder _day = new StringBuilder();
		if (second >= '0' && second <= '9') {
			_day.append(first);
			_day.append(second);
		} else {
			_day.append('0');
			_day.append(first);
		}

		return String.valueOf(_day);
	}

	private String parseMonth(String month) {
		final String[] months = { "Jan", "Feb", "Mar", "Apr", "May", "Jun",
				"Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
		};

		StringBuilder monthNo = new StringBuilder();

		for (int i = 0; i < months.length; i++) {
			if (month.equals(months[i])) {
				if (i < 9)
					monthNo.append('0');
				monthNo.append(i + 1);
			}
		}

		return String.valueOf(monthNo);
	}

	public String reformatDate(String date) {
		String[] dateInGivenFormat = date.split(" ");

		String day = parseDay(dateInGivenFormat[0]);
		String month = parseMonth(dateInGivenFormat[1]);
		String year = dateInGivenFormat[2];

		return new String(year + "-" + month + "-" + day);
	}
}