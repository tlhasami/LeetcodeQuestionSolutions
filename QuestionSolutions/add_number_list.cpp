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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0) ; 
        ListNode* current = dummy ;
        int carry = 0 ;
        while (l1 == NULL || l2 == NULL || carry==0) {
             int n1 = ( l1 == NULL ) ? 0 : l1->val;
             int n2 = ( l2 == NULL ) ? 0 : l2->val;
             int sum = n1 + n2 ;
             sum += carry ;

             carry = sum/10 ;

             current -> next = new ListNode( sum%10 ) ;
             if (l1) l1 = l1->next ;
             if (l2) l2 = l2->next ;
        }
        return dummy->next;

    }
};