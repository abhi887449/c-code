#include "linkedlist.cpp"
Node *mergelinkedlist(Node *head1, Node *head2)
{
    Node *fh=NULL;
    Node *ft=NULL;
    Node *h1=head1;
    Node *h2=head2;
    if(h1->data <= h2->data){
        fh=h1;
        ft=fh;
        h1=h1->nextnode;
    }
    else{
        fh=h2;
        ft=fh;
        h2=h2->nextnode;
    }
    while(h1!=NULL && h2!=NULL){
        if(h1->data <= h2->data){
        ft->nextnode=h1;
        ft=h1;
        h1=h1->nextnode;
    }
    else{
        ft->nextnode=h2;
        ft=h2;
        h2=h2->nextnode;
    }
    }
    if(h1!=NULL){
        ft->nextnode=h1;
    }
    else{
        ft->nextnode=h2;
    }
    return fh;
}
int main()
{
    Node *head1=initializelist();
    printlinkedlist(head1);
    Node *head2=initializelist();
    printlinkedlist(head2);
    Node *newhead=mergelinkedlist(head1,head2);
    printlinkedlist(newhead);
    return 0;
}