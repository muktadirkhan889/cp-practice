// Time complexity: O(n)
// Space: O(1)
// Floyd's Cycle Detection Algorithm

/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
        if(head == null || head.next == null) {
            return false;
        }
        ListNode tortoise = head;
        ListNode hare = head.next;
        
        while(hare!=tortoise) {
            if(hare==null || hare.next==null) {
                return false;
            }
            tortoise = tortoise.next;
            hare = hare.next.next;
        }
        return true;
    }
}
