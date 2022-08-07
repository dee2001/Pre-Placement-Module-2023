#include <iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    
    Node(){
        val = 0;
        next = nullptr;
    }
    
    Node(int x){
        val = x;
        next = nullptr;
    }
};

class LinkedList{
public:
    Node* dummy = new Node(123);
    Node* head = dummy->next;
    Node* tail = dummy->next;
    
    void add_tail(int x){
        if (!head){
            head = new Node(x);
            dummy->next = head;
            tail = head;
        }
        else{
            tail->next = new Node(x);
            tail = tail->next;
        }
    }
    
    void add_head(int x){
        dummy->next = new Node(x);
        dummy->next->next = head;
        head = dummy->next;
    }
    
    void add_pos(int pos,int x){
        Node* prev = dummy;
        Node* p = head;
        while(pos--){
            prev = prev->next;
            p = p->next;
        }
        prev->next = new Node(x);
        prev->next->next = p;
    }
    
    void delete_front(){
        if(head){
            dummy->next = head->next;
            head = dummy->next;
        }
    }
    
    void delete_last(){
        if(head){
            Node* prev = dummy;
            Node* p = head;
            while(p->next){
                prev = prev->next;
                p = p->next;
            }
            prev->next = nullptr;
            if(dummy->next == nullptr) head = nullptr;
        }
    }
    
    void printLL(){
        cout << "[";
        Node* p = head;
        while(p){
            cout << p->val << " ";
            p = p->next;
        }
        cout << "]\n";
    }
};

int main() {
    LinkedList a;
    a.add_tail(1);
    a.add_tail(2);
    a.add_tail(3);
    a.add_tail(4);
    a.add_tail(5);
    a.printLL();
    a.add_head(0);
    a.add_head(-1);
    a.printLL();
    a.add_pos(2,2);
    a.printLL();
    a.delete_last();
    a.delete_front();
    a.printLL();
    return 0;
}
