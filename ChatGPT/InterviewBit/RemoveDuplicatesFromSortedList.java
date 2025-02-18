package InterviewBit;

/**
 * Definition for singly-linked list.
 */
class ListNode {
    public int val;
    public ListNode next;

    ListNode(int x) {
        val = x;
        next = null;
    }
}

/*
Given a sorted linked list, delete all duplicates such that each element appear only once.
For example,
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3.
 */
class Solution {
    public ListNode deleteDuplicates(ListNode a) {
        ListNode current = a;
        while (current != null && current.next != null) {
            ListNode start = current;
            while (current.next != null && current.val == current.next.val) {
                current = current.next;
            }
            current = current.next;
            start.next = current;
        }
        return a;
    }
}
