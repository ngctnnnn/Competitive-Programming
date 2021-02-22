/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    private int pow(int a, int b){
        if (b == 0)
            return 1;
        if (b == 1)
            return a;
        if (b % 2 == 0)
            return pow(a, b>>1) * pow(a, b>>1);
        else
            return pow(a, b>>1) * pow(a, b>>1) * a;
        
    }
    public int getDecimalValue(ListNode head) {
        if (head == null)
            return 0;
        String num = "";
        for (ListNode i = head; i != null; i = i.next)
            num += i.val;
        char []c = num.toCharArray();
        int ans = 0;
        for (int i = 0; i < num.length(); i += 1)
            ans += (c[i] - '0') * pow(2, num.length() - i - 1);
        return ans;
    }
}