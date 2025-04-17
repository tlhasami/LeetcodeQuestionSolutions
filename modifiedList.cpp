class Solution {
public:
    ListNode* modifiedList(vector<int>& num, ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        unordered_set<int> nums(num.begin(), num.end());

        ListNode* current = dummy;
        while (current->next) {
            int value = current->next->val;
            if (nums.find(value) != nums.end()) {
                
                current->next = current->next->next;
                
            } else {
                current = current->next;
            }
        }
        return dummy->next;
    }
};
