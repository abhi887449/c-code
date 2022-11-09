#include "linkedlist.cpp"
void removeduplicate(Node *head){
    Node *temp =head;
    while(temp->nextnode!=NULL){
        Node *a = temp->nextnode;
        if(temp->data == a->data){
            
            temp->nextnode = a->nextnode;
            delete a;
            temp=temp;
        }
        else{
        temp=temp->nextnode;
        }
    }
}
int main(){
    Node *n1=initializelist();
    printlinkedlist(n1);
    removeduplicate(n1);
    printlinkedlist(n1);
    return 0;
}