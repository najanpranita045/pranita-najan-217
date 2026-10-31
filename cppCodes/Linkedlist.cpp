#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node*next;

    node(int val){
    data=val;
    next=NULL;
}
};

class Linkedlist{
    private:
    node*head;

    public:
    Linkedlist(){
        head=NULL;
    }

    void insert(int val){
        node*p=new node(val);
        if(head==NULL){
            head=p;

        }else{
            node*q=head;
            while(q->next!=NULL){
                q=q->next;
            }
            q->next=p;
        }
    }
    void remove(int val){
        node*p=NULL;
        node*q=head;

        if(q!=NULL && q->data==val){
            p=head;
            head=head->next;
            delete p;
            return;
        

    }
        
    while(q->next!=NULL){
        if(q->next->data==val){
            p=q->next;
            q->next=p->next;
            delete p;
            return;
        }
        q=q->next;
    }
    cout<<endl<<"value "<<val<<" not found in the list.\n";
}

void display(){
    cout<<endl<<"Linkedlist";
    node*q=head;
    while(q!=NULL){
        cout<<q->data<<"->";
        q=q->next;
    }
}
};

int main()
{
    Linkedlist list;
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
PS D:\pranita najan 217> g++ Linkedlist.cpp
PS D:\pranita najan 217> .\a.exe

Linkedlist10->20->30->
Linkedlist10->20->30->40->50->60->
Linkedlist10->20->30->50->60->
Linkedlist10->20->30->50->
value 100 not found in the list.

Linkedlist10->20->30->50->
*/