#include "linkedlist.cpp"

int searchinlinkedlist(Node *head,int data){
    Node *temp = head;
    for(int i=0;temp!=NULL;i++){
        if(temp->data == data){
            return i;
        }
        temp=temp->nextnode;
    }
    return -1;
}
int main(){
    Node *n1=initializelist();
    cout<<searchinlinkedlist(n1,5);
}