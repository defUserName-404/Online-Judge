import java.util.concurrent.ThreadLocalRandom;

/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

class VersionControl {
    boolean isBadVersion(int n) {
        int randomNum = ThreadLocalRandom.current().nextInt(1, n + 1);

        return (randomNum == n);
    }
}

public class FirstBadVersion_278 extends VersionControl {
    public int firstBadVersion(int n) {
        int left = 1, right = n;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (isBadVersion(mid))
                right = mid;
            else
                left = mid + 1;
        }

        return right;
    }
}