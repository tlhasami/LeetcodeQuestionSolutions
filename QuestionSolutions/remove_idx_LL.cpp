#include <iostream>
#include <vector>
using namespace std;
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
    int count(ListNode* head){
        ListNode* work = head;
        int c=0;

        while(work){
            c++;
            work=work->next;
        }
        return c;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* work = head;
        int c = count(head);
        cout<<endl<<c<<endl;
        if(c==1 && n== 1){
            delete work;
            head=nullptr;
            return head;
        }
        int idx = 0 ;
        while(work){
            if(c - n == idx + 1){
                ListNode* temp = work->next;
                work->next = temp->next;
                delete temp;
                return head; 
            }
                work = work -> next ;
            idx++;
        }
        return head ;
    }
};

// Helper function to print the linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        std::cout << head->val << " -> ";
        head = head->next;
    }
    std::cout << "nullptr" << std::endl;
}

// Helper function to create a linked list from an array
ListNode* createList(const std::vector<int>& vals) {
    ListNode* dummy = new ListNode();
    ListNode* current = dummy;
    for (int val : vals) {
        current->next = new ListNode(val);
        current = current->next;
    }
    return dummy->next;
}

int main() {
    Solution solution;
    
    // Create a test case
    std::vector<int> vals = {1, 2, 3, 4, 5};
    ListNode* head = createList(vals);
    
    std::cout << "Original list: ";
    printList(head);
    
    int n = 2;
    head = solution.removeNthFromEnd(head, n);
    
    std::cout << "List after removing " << n << "th node from end: ";
    printList(head);
    // Create another test case
    std::vector<int> vals2 = {10, 20, 30, 40, 50};
    ListNode* head2 = createList(vals2);
    
    std::cout << "Original list: ";
    printList(head2);
    
    // int m = 3;
    // head2 = solution.removeNthFromEnd(head2, m);
    
    // std::cout << "List after removing " << m << "th node from end: ";
    // printList(head2);

    // // Expected output for the first test case
    // std::cout << "Expected output for the first test case: 1 -> 2 -> 3 -> 5 -> nullptr" << std::endl;

    // // Expected output for the second test case
    // std::cout << "Expected output for the second test case: 10 -> 20 -> 40 -> 50 -> nullptr" << std::endl;
    
    return 0;
}