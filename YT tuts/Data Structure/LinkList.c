#include <stdio.h>

typedef struct
{
    char data;
    char *pNext;
} Node;

typedef struct
{
    char head;
} LinkedList;

void showHead(LinkedList *l)
{
    printf("%c", l->head);
}

int main()
{
    Node head;
    head.data = 'A';
    LinkedList mylist;
    mylist.head = head.data;

    showHead(&mylist);

    return 0;
}
