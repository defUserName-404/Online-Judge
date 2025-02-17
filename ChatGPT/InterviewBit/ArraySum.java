import java.util.ArrayList;
import java.util.LinkedList;

class Solution {
    public ArrayList<Integer> addArrays(ArrayList<Integer> a, ArrayList<Integer> b) {
        int m = a.size(), n = b.size();
        int maxSize = Math.max(m, n);
        LinkedList<Integer> result = new LinkedList<>();
        int carry = 0;
        for (int i = 0; i < maxSize; i++) {
            int sum = carry;
            if (m > 0) sum += a.get(--m);
            if (n > 0) sum += b.get(--n);
            carry = sum / 10;
            result.addFirst(sum % 10);
        }
        if (carry != 0) {
            result.addFirst(carry);
        }
        return new ArrayList<>(result);
    }
}
