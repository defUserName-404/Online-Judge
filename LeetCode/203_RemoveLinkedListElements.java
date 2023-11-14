import AlgorithmStudyPlan.ListNode;

class Solution {

	public ListNode removeElements(ListNode head, int val) {
		ListNode result = new ListNode(0, head),
			current = result;

		while (current.next != null) {
			if (current.next.val == val) {
				current.next = current.next.next;
			}
			else {
				current = current.next;
			}
		}

		return result.next;
	}

}
