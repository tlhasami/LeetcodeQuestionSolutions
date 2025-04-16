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
    int numComponents(ListNode* head, vector<int>& given) {
        set<int> nums(given.begin(), given.end());

        int count = 0;
        bool conn = false;
        while (head) {
            if (nums.find(head->val) != nums.end()) {
                conn = true;
            } else {
                if (conn) {
                    count += 1;
                    conn = false;
                }
            }
            head = head->next;
        }
        if (conn) 
            count += 1;
        
        return count;
    }
};
