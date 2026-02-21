/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sz = 0;
        ListNode *temp = head;
        while (temp != nullptr)
        {
            ++sz;
            temp = temp->next;
        }
        n = sz - n;
        if (n == 0)
            return head->next;
        temp = head;
        while (n != 1)
        {
            temp = temp->next;
            --n;
        }
        temp->next = temp->next->next;
        return head;

    }
};