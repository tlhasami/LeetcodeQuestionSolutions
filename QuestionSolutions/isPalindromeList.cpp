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
    bool isPal(vector<int>& val){
        int  m = 0 , n = val.size() - 1;
        while(m <= n){
            
            if(val[m]!=val[n]){
                return false;
            }
            m++;
            n--;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {

        vector<int>val;

        while(head){
            val.push_back(head->val);
            head = head->next;
        }
        return isPal(val);
        
    }
};
