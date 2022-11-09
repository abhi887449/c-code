#include "linkedlist.cpp"

class Pair{
    public:
    Node *head;
    Node *tail;
};
Node* reverselinkedlist(Node *head){
    if(head==NULL || head->nextnode==NULL){
        return head;
    }
    Node *smallanswer = reverselinkedlist(head->nextnode);
    Node *temp = smallanswer;
    while(temp->nextnode != NULL){
        temp=temp->nextnode;
    }
    temp->nextnode=head;
    head->nextnode=NULL;
    return smallanswer;
}
Pair reverselinkedlist_better(Node *head){
    if(head==NULL || head->nextnode==NULL){
        Pair ans;
        ans.head=head;
        ans.tail=head;
        return ans;
    }
    Pair smallans = reverselinkedlist_better(head->nextnode);
    smallans.tail->nextnode=head;
    smallans.tail=head;
    head->nextnode=NULL;
    return smallans;
}
Node* reverselinkedlist_better2(Node *head){
    if(head==NULL || head->nextnode==NULL){
        return head;
    }
    Node* smallans = reverselinkedlist_better2(head->nextnode);
    Node *tail = head->nextnode;
    tail->nextnode=head;
    head->nextnode=NULL;
    return smallans;
}
int main(){
    Node *head = initializelist();
    printlinkedlist(head);
    head = reverselinkedlist_better2(head);
    printlinkedlist(head);
    
    return 0;
}