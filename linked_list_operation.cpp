#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// Creating a node 
class node{
    public:
    int data;
    node* next;
    node(int value){
        data=value;
        next=NULL;
    }
};
node* head; 
// Inserting a node at last 
void insert_at_last(node*& head,int value){
    node * n = new node(value);
    if(head == NULL){
        head=n;
    }
    else{
        node* temp =head;
        while(temp->next != NULL){
            temp=temp->next;
        }
        
        temp->next=n;

    }
}
//Inserting a node at begining
void insert_at_begin(node* &head,int value){
    node* n =new node(value);
    if(head==NULL){
        head=n;
        return;
    }
    n->next=head;
    head=n;
}
// Deleting a node at begining
void delete_at_begin(node* &head){
    node* todelete = head;
    head=todelete->next;
    delete todelete;
}
void deletion(node* &head,int key){
    node* temp =head;
    if(head==NULL){
        cout<<"Linked list is empty";
        return;
    }

    if(head->next ==NULL){
        if(head->data==key){
            delete_at_begin(head);
            return;
        }
        cout<<" Value %d is not found"<<key;
        return;
    }
        while (temp->next->data!=key && temp->next->next!=NULL)
        { 
            temp=temp->next;
        }   
            if(temp->next->data==key){
                node* todelete = temp->next;
                temp->next=temp->next->next;
                delete todelete;
            }
            else{
                cout<<"\nValue "<<key<<" is not found\n";
            }

}

node* reverse_iterative(node* &head){
    node* prev_ptr=NULL;
    node* curr_ptr=head;
    node* next_ptr;
    while(curr_ptr!=NULL){
        next_ptr=curr_ptr->next;
        curr_ptr->next= prev_ptr;
        prev_ptr=curr_ptr;
        curr_ptr=next_ptr;
    }
    return prev_ptr;

}
node* reverse_recursive(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    } 
    node* newhead = reverse_recursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
void print(node*& head){
    node* temp =head;
    cout<<" ";
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

int main(){
    head=NULL;
    cout<<"Insertion at head\n";
    insert_at_last(head,1);
    insert_at_last(head,2);
    insert_at_last(head,3);
    insert_at_last(head,4);
    insert_at_last(head,5);
    print(head);
    cout<<"\nInserion at begin\n";
    insert_at_begin(head,6);
    print(head);
    cout<<"\nDeletion at begining\n";
    delete_at_begin(head);
    print(head);
    cout<<"\nDeletion value=23 ";
    deletion(head,23);
    print(head);
    // cout<<"\nReverse Linked list Iterative method:";
    // node* rev = reverse_iterative(head);
    // print(rev);
    cout<<"\nReverse Linked list Recursive method:";
    node* rev = reverse_recursive(head);
    print(rev);
    
    // node* temp =new node(3);
    // cout<<temp->data<<" "; //3
    // cout<<temp->next<<" "; // 0
    // cout<<temp;            //0xe60eb8 node address
    return 0;
}


/* OUTPUT:
Insertion at head
 1->2->3->4->5->NULL
Inserion at begin
 6->1->2->3->4->5->NULL
Deletion at begining
 1->2->3->4->5->NULL
Deletion value=23 
Value 23 is not found
 1->2->3->4->5->NULL
Reverse Linked list Recursive method: 5->4->3->2->1->NULL
*/