import java.util.PriorityQueue;

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest obj = new KthLargest(k, nums);
 * int param_1 = obj.add(val);
 */
class KthLargest {

    private final PriorityQueue<Integer> numbersMinHeap;
    private final int k;

    public KthLargest(int k, int[] nums) {
        numbersMinHeap = new PriorityQueue<>(k);
        this.k = k;
        for (final int num : nums) add(num);
    }

    public int add(int val) {
        if (numbersMinHeap.size() < k) {
            numbersMinHeap.offer(val);
        } else if (val > numbersMinHeap.peek()) {
            numbersMinHeap.poll();
            numbersMinHeap.offer(val);
        }
        return numbersMinHeap.peek();
    }
}
