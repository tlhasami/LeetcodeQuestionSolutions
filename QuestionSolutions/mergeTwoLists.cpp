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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0); // Create a dummy node
        ListNode* work = &dummy;
        //work = work->next;

        while( list1 && list2){
            if(list1->val < list2->val){
                work->next = list1;
                list1 = list1->next; 
            } else {
                work->next = list2;
                list2 = list2->next; 
            }
            work = work->next;
        }

        while(list1){
            work->next = list1;
            list1 = list1->next;
            work = work->next;
        }
        while(list2){
            work->next = list2;
            list2 = list2->next;
            work = work->next;
        }

        return dummy.next;
    }
};
