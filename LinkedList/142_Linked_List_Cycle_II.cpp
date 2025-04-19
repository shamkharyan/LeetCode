/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr)
            return nullptr;
        ListNode *slow = head;
        ListNode *fast = head;
        do
        {
            slow = slow->next;
            fast = fast->next->next;
        } while (fast != nullptr && fast->next != nullptr && fast != slow);

        if (fast == nullptr || fast->next == nullptr)
            return nullptr;

        ListNode *slow2 = head;
        while (slow != slow2)
        {
            slow = slow->next;
            slow2 = slow2->next;
        }
        return slow;
    }
};
