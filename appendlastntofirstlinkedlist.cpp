#include "linkedlist.cpp"
Node *appendlastntofirst(Node *head, int length, int n)
{
    if (n < 0)
    {
        cout << "input is not valid" << endl;
        return head;
    }
    if (n == 0)
    {
        return head;
    }
    if (length == n)
    {
        return head;
    }
    if (n > length)
    {
        cout << "input is greater than length of linked list" << endl;
        return head;
    }
    Node *temp = head;
    Node *a = head;
    Node *tail;
    if (length - n == 1)
    {
        while (a != NULL)
        {
            tail = a;
            a = a->nextnode;
        }
        head = temp->nextnode;
        tail->nextnode = temp;
        temp->nextnode = NULL;
        return head;
    }
    while (a != NULL)
    {
        tail = a;
        a = a->nextnode;
    }
    int count=0;
        Node *b;
    while(temp->nextnode!=NULL && count<length-n){
        b=temp;
        temp = temp->nextnode;
        count++;
    }
    tail->nextnode=head;
    head=b->nextnode;
    b->nextnode=NULL;
    return head;
}
int main()
{
    Node *n1 = initializelist();
    int n;
    int length = lengthoflinkedlist(n1);
    cin >> n;
    printlinkedlist(n1);
    n1 = appendlastntofirst(n1, length, n);
    printlinkedlist(n1);
    // n1 = appendlastntofirst(n1, length, 0);
    // printlinkedlist(n1);
    // n1 = appendlastntofirst(n1, length, 1);
    // printlinkedlist(n1);
    // n1 = appendlastntofirst(n1, length, 2);
    // printlinkedlist(n1);
    // n1 = appendlastntofirst(n1, length, 3);
    // printlinkedlist(n1);

    return 0;
}