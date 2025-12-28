import java.util.stream.IntStream;

class Solution {
//    public int timeRequiredToBuy(int[] tickets, int k) {
//        int total = 0;
//        for (int i = 0; i < tickets.length; i++) {
//            total += (i <= k) ? Math.min(tickets[i], tickets[k]) : Math.min(tickets[i], tickets[k] - 1);
//        }
//        return total;
//    }

    public int timeRequiredToBuy(int[] tickets, int k) {
        return IntStream.range(0, tickets.length)
                .map(i -> Math.min(tickets[i], tickets[k] - (i > k ? 1 : 0)))
                .sum();
    }
}