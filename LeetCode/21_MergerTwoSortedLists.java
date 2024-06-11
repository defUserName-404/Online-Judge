/**
 * Definition for singly-linked list. public class ListNode { int val; ListNode next; ListNode() {}
 * ListNode(int val) { this.val = val; } ListNode(int val, ListNode next) { this.val = val;
 * this.next = next; } }
 */

// * Unsolved

import AlgorithmStudyPlan.ListNode;

class Solution {

	public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
		ListNode result = new ListNode(0);
		while (true) {
			if (list1 != null && list2 != null) {
				int minVal = Math.max(list1.val, list2.val);
				result.next = new ListNode(minVal);
				list1 = list1.next;
				list2 = list2.next;
			}
			if (list1 == null || list2 == null) {
				result.next = (list1 == null) ? list2.next : list1.next;
				break;
			}
		}
		return result;
	}

}
