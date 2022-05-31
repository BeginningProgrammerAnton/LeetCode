class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        if (list1 == null && list2 == null) {
            return null;
        }
        ListNode tmp = new ListNode();
        ListNode result = tmp;
        while (list1 != null) {
            if (list2 != null) {
                if (list1.val <= list2.val) {
                    list1 = list1.next;
                } else {
                    list2 = list2.next;
                }
                tmp.next = new ListNode();
                tmp = tmp.next;
            } else {
                break;
            }
        }
        if (list1 == null && list2 != null) {
            while (list2 != null) {
                tmp.val = list2.val;
                list2 = list2.next;
                if (list2 != null) {
                    tmp.next = new ListNode();
                    tmp = tmp.next;
                }
            }
        }
        if (list2 == null && list1 != null) {
            while (list1 != null) {
                tmp.val = list1.val;
                list1 = list1.next;
                if (list1 != null) {
                    tmp.next = new ListNode();
                    tmp = tmp.next;
                }
            }
        }
        return result;
    }
}