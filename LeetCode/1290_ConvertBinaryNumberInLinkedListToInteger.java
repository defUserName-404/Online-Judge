import AlgorithmStudyPlan.ListNode;

class Solution {

	public int getDecimalValue(ListNode head) {
		ListNode current = head;
		StringBuilder value = new StringBuilder();

		while (current != null) {
			String currentValue = String.valueOf(current.val);
			value.append(currentValue);
			current = current.next;
		}

		return Integer.parseInt(value.toString(), 2);
	}
}