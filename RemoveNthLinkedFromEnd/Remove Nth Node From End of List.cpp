#include <iostream>


struct ListNode {
     int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        auto tmp = head;
        int my_size = 1;
        while (tmp->next != nullptr) {
            tmp = tmp->next;
            ++my_size;
        }
        if (my_size == 1) {
                return nullptr;
        }
        tmp = head;
        if (n == 1) {
            for (int i = 0; i < my_size - 2; i++)
            {
                tmp = tmp->next;

            }
            tmp->next = nullptr;
            return head;
        }
        n = my_size - n;
        for (int i = 0; i < n - 1; i++)
        {
            tmp = tmp->next;
        }
        auto tmp2 = tmp->next;
        if (n == 0) {
            head = tmp->next;
            return head;
        }
        tmp->next = tmp2->next;
        tmp2->next = nullptr;
        return head;
    }
};
int main()
{
    Solution sol;
    ListNode l3(3);
    ListNode l2(2,&l3);
    ListNode l1(1,&l2);

    //ListNode l1;
    //ListNode l2;
    //ListNode l3;
    //ListNode l4;
    //ListNode l5;
    //l1.val = 1;
    //l2.val = 2;
    //l3.val = 3;
    //l4.val = 4;
    //l5.val = 5;
    //l1.next = &l2;
    //l2.next = &l3;
    //l3.next = &l4;
    //l4.next = &l5;
    auto x =  sol.removeNthFromEnd(&l1, 2);
}


