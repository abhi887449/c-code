#include "linkedlist.cpp"
int midpointoflinkedlist(Node *head){
    Node *temp = head;
    Node *fast = head;
    // Node *pre = head;
    while((fast->nextnode!=NULL) && (fast->nextnode->nextnode!=NULL)){
        temp=temp->nextnode;
        fast = fast->nextnode->nextnode;
    }
    
    return temp->data;
}
int main(){
    Node *n1 = initializelist();
    printlinkedlist(n1);
    int mp = midpointoflinkedlist(n1);
    cout<<mp;
    return 0;
}