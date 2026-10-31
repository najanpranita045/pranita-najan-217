#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*prev;
    node*next;

    node(int val){
    data=val;
    prev=nullptr;
    next=nullptr;
    }
};

class LinkedList{
private:
    node*head;
public:
    LinkedList(){
        head=nullptr;
    }

    void insert(int val){
        node*p=new node(val);
       
        if(head==nullptr){
            head=p;
        }
        else{
            node*q=head;
            while(q->next!=nullptr){
                q=q->next;
            }
            q->next=p;
            p->prev=q;

        }
        
    }
    void remove(int val){
        node*q=head;

        if (q == nullptr) {
            cout << endl << "Value " << val
                 << " not found in the list.\n";
            return;
        }

        // Delete head node
        if (q->data == val) {
            head = q->next;

            if (head != nullptr) {
                head->prev = nullptr;
            }

            delete q;
            return;
        }

        // Search for the node
        while (q != nullptr && q->data != val) {
            q = q->next;
        }

        // Value not found
        if (q == nullptr) {
            cout << endl << "Value " << val
                 << " not found in the list.\n";
            return;
        }

        // Delete node
        q->prev->next = q->next;

        if (q->next != nullptr) {
            q->next->prev = q->prev;
        }

        delete q;
    }

    void display() {
        cout << endl << "Linked list: ";

        node* q = head;

        while (q != nullptr) {
            cout << q->data << "->";
            q = q->next;
        }

        cout << "NULL";
    }
};

int main() {
    LinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.display();

    list.insert(40);
    list.insert(50);
    list.insert(60);
    list.display();

    list.remove(40);
    list.display();

    list.remove(60);
    list.display();

    list.remove(100);
    list.display();

    return 0;
}


/*
PS D:\pranita najan 217> g++ doublylinkedlist.cpp
PS D:\pranita najan 217> .\a.exe

Linked list: 10->20->30->NULL
Linked list: 10->20->30->40->50->60->NULL
Linked list: 10->20->30->50->60->NULL
Linked list: 10->20->30->50->NULL
Value 100 not found in the list.

Linked list: 10->20->30->50->NULL

*/
        