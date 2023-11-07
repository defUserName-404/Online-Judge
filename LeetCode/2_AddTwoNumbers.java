import AlgorithmStudyPlan.ListNode;

class Solution {

	public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
		ListNode sum = new ListNode();
		ListNode temp = sum;
		int carry = 0;

		while (l1 != null || l2 != null || carry != 0) {
			int currentDigit = carry;

			if (l1 != null) {
				currentDigit += l1.val;
				l1 = l1.next;
			}

			if (l2 != null) {
				currentDigit += l2.val;
				l2 = l2.next;
			}

			carry = currentDigit / 10;
			currentDigit %= 10;
			temp.next = new ListNode(currentDigit);
			temp = temp.next;
		}

		return sum.next;
	}

}
