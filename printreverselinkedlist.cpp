#include "linkedlist.cpp"
void printreverselinkedlist(Node *head){
    if(head == NULL){
        return;
    }
    printreverselinkedlist(head->nextnode);
    cout<<head->data<<" ";
}
int main(){
    Node *n1 = initializelist();
    printlinkedlist(n1);
    printreverselinkedlist(n1);

    return 0;
}