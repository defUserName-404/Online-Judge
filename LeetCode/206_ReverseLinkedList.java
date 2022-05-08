import AlgorithmStudyPlan.ListNode;

class Solution {
	
	public ListNode reverseList(ListNode head) {
		ListNode reversed = null,
				next = null,
				current = head;

		while (current != null) {
			next = current.next;
			current.next = reversed;
			reversed = current;
			current = next;
		}

		return reversed;
	}
}