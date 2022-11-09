#include "linkedlist.cpp"
void splitintwo(Node *head,Node **a,Node **b){

}
Node* mergesort(Node *head){
    if(head==NULL){
        return head;
    }
    Node *a=NULL;
    Node *b=NULL;
    splitintwo(head,&a,&b);
}
int main(){
    Node *head = initializelist();
    head=mergesort(head);
    printlinkedlist(head);
}