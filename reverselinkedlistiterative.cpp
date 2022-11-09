#include "linkedlist.cpp"
Node *reverseiterative(Node *head)
{
    Node *pre =NULL;
    Node *current =head;
    Node *next = head->nextnode;
    while(current->nextnode!=NULL){
        current->nextnode=pre;
        pre=current;
        current=next;
        next=next->nextnode;
    }
    current->nextnode=pre;
        pre=current;
    return pre;
}
int main()
{
    Node *head = initializelist();
    printlinkedlist(head);
    head = reverseiterative(head);
    printlinkedlist(head);
    return 0;
}