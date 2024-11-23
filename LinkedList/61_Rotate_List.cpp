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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr)
            return head;
        ListNode *tail = head;
        int n = 1;
        while (tail->next != nullptr)
        {
            tail = tail->next;
            ++n;
        }
        tail->next = head;
        for (int i = 0; i < n - k % n; ++i)
        {
            head = head->next;
            tail = tail->next;
        }
        tail->next = nullptr;
        return head;
    }
};