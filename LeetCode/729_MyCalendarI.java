import java.util.Comparator;
import java.util.NavigableSet;
import java.util.TreeSet;

class MyCalendar {

    private final NavigableSet<int[]> bookedTimes;

    public MyCalendar() {
        bookedTimes = new TreeSet<>(Comparator.comparingInt((int[] a) -> a[0]));
    }

    public boolean book(int startTime, int endTime) {
        var currentlyBookedTime = new int[]{startTime, endTime};
        var bookedTimeFloor = bookedTimes.floor(currentlyBookedTime);
        var bookedTimeCeiling = bookedTimes.ceiling(currentlyBookedTime);
        if (bookedTimeFloor != null && startTime < bookedTimeFloor[1]) {
            return false;
        }
        if (bookedTimeCeiling != null && bookedTimeCeiling[0] < endTime) {
            return false;
        }
        bookedTimes.add(currentlyBookedTime);
        return true;
    }
}

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar obj = new MyCalendar();
 * boolean param_1 = obj.book(startTime,endTime);
 */