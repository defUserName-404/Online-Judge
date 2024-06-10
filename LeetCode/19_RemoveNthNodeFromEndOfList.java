import AlgorithmStudyPlan.ListNode;

class Solution {

	public ListNode removeNthFromEnd(ListNode head, int n) {
		ListNode temp = head,
				afterRemoval = new ListNode(0);
		int size = 0;
		afterRemoval.val = head.val;
		while (temp != null) {
			size++;
			temp = temp.next;
		}
		int toBeDeletedIndex = size - n;
		for (int i = 0; i < size; i++) {
			if (i == toBeDeletedIndex) {
				continue;
			}
			afterRemoval.next = head;
			head = head.next;
		}
		return afterRemoval;
	}

}
