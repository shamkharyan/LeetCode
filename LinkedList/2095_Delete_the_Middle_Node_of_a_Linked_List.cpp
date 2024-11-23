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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return nullptr;
        ListNode *middle = head->next;
        ListNode *last = head->next->next;
        ListNode *midPrev = head;
        while (last != nullptr && last->next != nullptr)
        {
            middle = middle->next;
            midPrev = midPrev->next;
            last = last->next->next;
        }
        midPrev->next = middle->next;
        return head;
    }
};