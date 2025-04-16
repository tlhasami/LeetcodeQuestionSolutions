#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr) return nullptr;
        ListNode* work = head;
        while(work){
            if(work->val == work->next->val){
                ListNode* temp = work->next;
                work->next = temp->next;
                delete temp;
            } else {
                work = work->next ;
            }
        }
        
        return head;
    }
};



void printList(ListNode* head) {
    while (head) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // Create a linked list: 1 -> 1 -> 2 -> 3 -> 3
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(3);

    // Print the original linked list
    printList(head);

    // Remove duplicates
    Solution solution;
    head = solution.deleteDuplicates(head);

    // Print the modified linked list
    printList(head);

    return 0;
}
