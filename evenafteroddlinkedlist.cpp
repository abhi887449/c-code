#include "linkedlist.cpp"
Node *evenafteroddlinkedlist(Node *head)
{
    Node *oddh = NULL;
    Node *oddt = NULL;
    Node *evenh = NULL;
    Node *event = NULL;
    while (head != NULL)
    {
        if (head->data % 2 != 0)
        {
            if (oddh == NULL)
            {
                oddh = head;
                oddt = head;
                head = head->nextnode;
            }
            else
            {
                oddt->nextnode = head;
                oddt = oddt->nextnode;
                head = head->nextnode;
            }
        }
        else
        {
            if (evenh == NULL)
            {
                evenh = head;
                event = head;
                head = head->nextnode;
            }
            else
            {
                event->nextnode = head;
                event = event->nextnode;
                head = head->nextnode;
            }
        }
    }
    oddt->nextnode=evenh;
    event->nextnode=NULL;
    return oddh;
}
int main()
{
    Node *head = initializelist();
    head = evenafteroddlinkedlist(head);
    printlinkedlist(head);
}