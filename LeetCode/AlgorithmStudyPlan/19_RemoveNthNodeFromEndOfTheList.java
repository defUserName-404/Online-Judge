package AlgorithmStudyPlan;

class Solution {
	public ListNode removeNthFromEnd(ListNode head, int n) {
		ListNode afterRemoval = new ListNode();

		while (head != null) {
			if (n != 0)
				afterRemoval.next = head.next;
			n--;
			head = head.next;
		}

		return afterRemoval;
	}
}