#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *nextnode;
    Node(int data){
        this->data = data;
        this->nextnode = NULL;
        }
};

// to initialise the linked list 
Node* initializelist(){
    int data;
    char check='y';
    Node *head = NULL;
    Node *tail;
    while(check == 'y'){
        cin>>data;
        Node *newnode = new Node(data);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->nextnode=newnode;
            tail=newnode;
        }
        cout<<"Do you want to continue entering data(y/n):";
        cin>>check;;
    }
    return head;
}

//to print linked list
void printlinkedlist(Node *head){
    Node *temp = head;
    if(temp==NULL){
        cout<<"empty linked list";
    }
    else{
        while(temp!=NULL){
            cout<<temp->data <<" ";
            temp = temp->nextnode;
        }
        cout<<endl;
    }
}
//to find the length of linked list
int lengthoflinkedlist(Node *head){
    int count=0;
    Node *temp = head;
    if(temp->nextnode==NULL){
        return count;
    }
    else{
        while(temp!=NULL){
            count++;
            temp = temp->nextnode;
        }
    }
    return count;
}

//to insert node at ith position
Node* insertnode(Node *head,int i,int data){
    Node *temp = head;
    int count=0;
    Node *newnode = new Node(data);
    if(i==0){
        newnode->nextnode=head;
        head=newnode;
        return head;
    }
    while(count < i-1){
        if(temp->nextnode == NULL){
            cout<<"position is greater than length of linked list"<<endl;
            return head;
        }
        temp = temp->nextnode;
        count++;
    }
    newnode->nextnode = temp->nextnode;
    temp->nextnode = newnode;
    return head;
}

//delete node in linked list
Node* deletenode(Node *head,int i){
    Node *temp = head;
    int count =0;
    if(i<=0){
        cout<<"position is less than 1"<<endl;
        return head;
    }
    if(i==1){
        head = temp->nextnode;
        delete temp;
        return head;
    }
    Node *a;
    while(temp->nextnode!=NULL && count<i-1){
        a=temp;
        temp = temp->nextnode;
        count++;
    }
    if(count==i-1){
        a->nextnode=temp->nextnode;
        delete temp;
        return head;
    }
    else{
        cout<<"position is greater than length of linked list"<<endl;
        return head;
    }

}
