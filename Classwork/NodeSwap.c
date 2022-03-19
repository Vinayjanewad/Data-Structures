#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int data;
    struct node * next;
};
typedef struct node * NODE;
NODE getnode()
{
    NODE newn;
    newn=(NODE)malloc(sizeof(struct node));
    if(newn==NULL)
        printf("Memory allocation failed\n");
    return newn;
}
void read(NODE newn)
{
    printf("Enter details\n");
    scanf("%d",&newn->data);
    newn->next=NULL;
}
NODE InsertEnd(NODE head)
{
    NODE newn=getnode();
    read(newn);
    if(head==NULL)
        return newn;
    newn->next=head;
    head=newn;
    return head;
}
NODE InsertFront(NODE head)
{
    NODE newn=getnode();
    if(newn==NULL)
        return head;
    read(newn);
    if(head==NULL)
        return newn;
    else
    {
        NODE cur=head;
        while(cur->next!=NULL)
            cur=cur->next;
        cur->next=newn;
        return head;
    }
}
NODE DeleteFront(NODE head)
{
    if(head==NULL)
    {
        printf("List is empty\n");
        return head;
    }
    else
    {
        NODE cur=head;
        head=head->next;
        free(cur);
        return head;
    }
}
NODE DeleteEnd(NODE head)
{
    if(head==NULL)
    {
        printf("list is empty\n");
        return head;
    }
    else if(head->next==NULL)
    {
        free(head);
        return NULL;
    }
    else
    {
        NODE prev=NULL;
        NODE cur=head;
        while(cur->next!=NULL)
        {
            prev=cur;
            cur=cur->next;
        }
        free(cur);
        prev->next=NULL;
        return head;
    }
}
void Display(NODE head)
{
    if(head==NULL)
        printf("List is empty\n");
    else
    {
        NODE cur=head;
        while(cur!=NULL)
        {
            printf("%d\n",cur->data);
            cur=cur->next;
        }
    }
}
NODE Swap(NODE head)
{
    NODE cur=head;
    NODE temp=NULL;
    while(cur!=NULL&&cur->next!=NULL)
    {
        temp=cur->data;
        cur->data=cur->next->data;
        cur->next->data=temp;
        cur=cur->next->next;
    }
    return head;
}
void main()
{
    NODE head=NULL;
    int choice;
    while(1)
    {
        printf("1.Insert front\n2.Insert end\n3.Delete front\n4.delete end\n5.display list\n6.Swap\n7.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: head=InsertFront(head);
                    break;
            case 2:head=InsertEnd(head);
                    break;
            case 3:head=DeleteFront(head);
                    break;
            case 4:head=DeleteEnd(head);
                    break;
            case 5:printf("Display list\n");
                   Display(head);
                   break;
            case 6: head=Swap(head);
                    break;
            case 7: exit(0);
                    break;
            default:printf("Invalid\n");
        }
    }
}