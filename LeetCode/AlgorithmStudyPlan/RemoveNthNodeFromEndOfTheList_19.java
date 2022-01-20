public class RemoveNthNodeFromEndOfTheList_19 {
	public ListNode removeNthFromEnd(ListNode head, int n) {
		ListNode afterRemoval = new ListNode(-1);

		while (head != null) {
			if (n != 0)
				afterRemoval.next = head.next;
			n--;
			head = head.next;
		}

		return afterRemoval.next;
	}
}