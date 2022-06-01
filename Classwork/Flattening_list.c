#include <stdio.h>
#include <stdlib.h>

// Link list node
struct node
{
    int data;
    struct node *next;
    struct node *bottom;
};
typedef struct node *NODE;

NODE head = NULL;

NODE merge(NODE a, NODE b)
{
    if (a == NULL)
        return b;
    if (b == NULL)
        return a;
    NODE result;

    if (a->data < b->data)
    {
        result = a;
        result->bottom = merge(a->bottom, b);
    }

    else
    {
        result = b;
        result->bottom = merge(a, b->bottom);
    }
    result->next = NULL;
    return result;
}

NODE flatten(NODE head)
{
    if (head == NULL || head->next == NULL)
        return head;

    head->next = flatten(head->next);
    head = merge(head, head->next);
    return head;
}

NODE GetNode()
{
    NODE newn;
    newn = (NODE)malloc(sizeof(NODE));
    if (newn == NULL)
    {
        printf("Not created\n");
        exit(0);
    }
    newn->next = NULL;
    return newn;
}
NODE InsertFront(NODE head, int data)
{
    NODE newn = (NODE)malloc(sizeof(NODE));

    newn->data = data;
    newn->next = NULL;
    newn->bottom = head;
    head = newn;
    return head;    
}

void printList(NODE head)
{

    if (head == NULL)
        printf("List is empty\n");
    else
    {
        NODE cur = head;
        while (cur != NULL)
        {
            printf("%d\n", cur->data);
            cur = cur->bottom;
        }
    }
}

int main()
{
    head = InsertFront(head, 30);
    head = InsertFront(head, 8);
    head = InsertFront(head, 7);
    head = InsertFront(head, 5);

    head->next = InsertFront(head->bottom, 20);
    head->next = InsertFront(head->next, 10);

    head->next->next = InsertFront(head->next->next, 50);
    head->next->next = InsertFront(head->next->next, 22);
    head->next->next = InsertFront(head->next->next, 19);

    head->next->next->next = InsertFront(head->next->next->next, 45);
    head->next->next->next = InsertFront(head->next->next->next, 40);
    head->next->next->next = InsertFront(head->next->next->next, 35);
    head->next->next->next = InsertFront(head->next->next->next, 20);

    head = flatten(head);

    printList(head);
    return 0;
}