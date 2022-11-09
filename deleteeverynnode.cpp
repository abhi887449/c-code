#include "linkedlist.cpp"
void deleteeverynnode(Node *head,int m,int n){
    Node *temp =head;
    Node *temp1 = head->nextnode;
    while(temp1!=NULL){
        int mn=m;
        int nn=n;
        while(mn-- || temp1!=NULL){
            temp=temp->nextnode;
            temp1=temp1->nextnode;
        }
        while(nn-- || temp1!=NULL){
            Node *temp2 = temp1;
            temp1=temp1->nextnode;
            delete temp2;
        }
        temp->nextnode=temp1;
        temp=temp1;
        temp1=temp1->nextnode;
    }
}
int main(){
    Node *head = initializelist();
    printlinkedlist(head);
    int m,n;
    cout<<"Enter index afer which deletion start must be greater than 0:";
    cin>>m;
    cout<<endl;
    cout<<"Enter number of nodes to be deleted:";
    cin>>n;
    cout<<endl;
    deleteeverynnode(head,m,n);
    printlinkedlist(head);
    return 0;
}