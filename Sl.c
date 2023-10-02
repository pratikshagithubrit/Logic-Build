#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data; 
    struct node * next;
};


void InsertFirst(struct node **First, int No)
{
    struct node * newn = (struct node *)malloc(sizeof(struct node));
    newn->Data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else 
    {
        newn->next = *First;
        *First = newn;
    }
}

void display(struct node * First)
{
    while(First != NULL)
    {
        printf("|%d|->",First->Data);
        First = First->next;
    }
    printf("NULL\n");
}
int main()
{

    struct node *Head = NULL;
    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    display(Head);

    return 0;

}
    