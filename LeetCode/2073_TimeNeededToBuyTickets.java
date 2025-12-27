class Solution {
    public int timeRequiredToBuy(int[] tickets, int k) {
        int total = 0;
        for (int i = 0; i < tickets.length; i++) {
            total += (i <= k) ? Math.min(tickets[i], tickets[k]) : Math.min(tickets[i], tickets[k] - 1);
        }
        return total;
    }
}