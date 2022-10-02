#include <stdio.h>

struct Node
{
    char data;
    struct Node *nextNode;
};

struct LinkedList
{
    struct Node *head;
};
void showNode(struct Node node)
{
    printf("<Node: %c>\n", node.data);
}
void showHead(struct LinkedList *l)
{
    printf("Head:  ");
    showNode(*l->head);
}

int main()
{
    struct Node a, b, c;
    a.data = 'A';
    c.data = 'C';
    b.data = 'B';
    a.nextNode = &b;
    b.nextNode = &c;

    struct LinkedList mylist;
    mylist.head = &a;

    showHead(&mylist);
    showNode(*mylist.head->nextNode);
    showNode(*mylist.head->nextNode->nextNode);
    return 0;
}