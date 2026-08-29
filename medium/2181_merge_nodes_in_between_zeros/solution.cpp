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
class Solution 
{
public:
    ListNode* mergeNodes(ListNode* head) 
    {
        while (head != nullptr && head->val != 0)
        {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        
        ListNode* start = head;
        while (start)
        {
            int sum = start->val;
            ListNode* end = start->next;
            while (end->val != 0)
            {
                ListNode* temp = end;
                sum += end->val;
                end = end->next;
                delete temp;
            }
            start->val = sum;
            start->next = end->next;
            delete end;
            start = start->next;
        }

        return head;
    }
};
