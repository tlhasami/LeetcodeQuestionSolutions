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
    ListNode* swapPairs(ListNode* head) {

        if(head == nullptr) return nullptr;
        if(head->next == nullptr) return head;

        ListNode* current = head;

        while(current->next){

            int temp = current->val;
            current->val = current->next->val;
            current->next->val = temp ;

            current = current->next;
            if(current->next)
                current = current->next;
        }

        return head;

    }
};
