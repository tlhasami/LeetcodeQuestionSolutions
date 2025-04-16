#include<iostream>
using namespace std;
struct Node {
    int val ;
    Node* next;
    Node(int value){
        this->val = value ;
        next = nullptr;
    }
};

struct LinkList {
    Node* head;
    Node* tail;
    LinkList(){
        head=tail=nullptr;
    }
    int find(int key){
        if(head==nullptr) return -1;
        Node* temp = head;
        int idx = 0 ;
        while(temp!=nullptr){
            if(temp->val == key)
                return idx;
            idx++;
            temp = temp-> next;
        }

        return -1;
    }
    void insert(int idx , int val){
        if(head == nullptr){
            cout<<"Nothing can be inserted"<<endl;
        }
        Node*temp = head;
        int count = 0 ;
        while(temp!=nullptr && count<idx){
            cout<<count<<" "<<idx<<endl;
            if(count==idx-1){
                Node* newNode = new Node(val);
                newNode->next = temp->next;
                temp->next = newNode;
                if(newNode->next == nullptr) tail = newNode;
                return;
            }
            temp = temp -> next ;
            count++;
        }
        cout<<"Invalid index"<<endl;
        return;
        
    }
    void pop_front(){
        if(head==nullptr){
            cout << "under flow" ; 
            return;
        }
        if(head==tail){
            delete head;
            head = tail = nullptr ;
            return;
        }
        Node* temp = head;
        temp = temp->next ; 
        delete head;
        head = temp ; 

    }
    void pop_back(){
        if(head==nullptr){
            cout<<"Under Flow";
            return;
        }
        if (head == tail) { // Only one node in the list
            delete head;
            head = tail = nullptr;
            return;
        }
        Node*temp = head;
        while(temp->next!=tail){
            temp = temp->next ; 
        }
        delete tail;
        tail = temp;
        temp -> next = nullptr;
    }
    void push_front(int val){
        Node* temp = new Node(val);
        if(head==nullptr){
            head  = tail= temp;
            return;
        }
        temp->next = head;
        head = temp;
    }
    void push_back(int val){
        Node* temp = new Node(val);
        if(head==nullptr){
            head = tail = temp;
            return;
        }
        tail->next = temp;
        tail = temp;
    }
    void print(){
        Node* temp = head;
        while(temp!=nullptr){
            cout<<temp->val<<" -> ";
            temp = temp->next;
        }
        cout << " NULL " << endl;
    }
};

int main (){
    LinkList l1 ;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(5);
    //l1.pop_back();
    //l1.pop_front();
    l1.print();
    l1.insert(3,4);
    l1.print();
    cout << l1.find(4);
    return 0;
}