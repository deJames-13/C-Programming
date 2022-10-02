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
    printf("%c->\t", node.data);
    // printf("<Node: %c>\n", node.data);
}
void showHead(struct LinkedList *l)
{
    printf("Head:  ");
    showNode(*l->head);
}

char showData(struct Node node)
{
    return node.data;
}

int main()
{
    printf("\n");
    struct Node a, b, c, d, e, f;
    a.data = 'A';
    b.data = 'B';
    c.data = 'C';
    d.data = 'D';
    e.data = 'E';
    f.data = 'F';
    a.nextNode = &b;
    b.nextNode = &c;
    c.nextNode = &d;
    d.nextNode = &e;
    e.nextNode = &f;

    struct LinkedList mylist;
    mylist.head = &a;

    showNode(*mylist.head);
    showNode(*mylist.head->nextNode);
    showNode(*mylist.head->nextNode->nextNode);
    showNode(*mylist.head->nextNode->nextNode->nextNode);
    showNode(*mylist.head->nextNode->nextNode->nextNode->nextNode);
    showNode(*mylist.head->nextNode->nextNode->nextNode->nextNode->nextNode);

    printf("\n");
    return 0;
}