#include <stdio.h>

typedef struct
{
    char data;
    char *pNext;
} Node;

typedef struct
{
    Node head;
} LinkedList;

void showNode(Node *n)
{
    printf("<Node: %c>", n->data);
}
void showHead(LinkedList *l)
{
    printf("The head is:\t");
    showNode(&l->head);
}

int main()
{
    Node head, next;
    head.data = 'A';
    next.data = 'B';
    LinkedList mylist;
    mylist.head = head;
    mylist.head.pNext = &next.data;

    showHead(&mylist);
    printf("\n%c", *mylist.head.pNext);
    return 0;
}
