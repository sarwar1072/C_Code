#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data ;
    struct node *next;
};
void Create(struct node *head)
{
    while(head!=NULL)
    {
        printf("%d->",head->data);
        head=head->next;
    }
}
int main()
{
    struct node *head;
    struct node *a=NULL;
    struct node *b=NULL;
    struct node *c=NULL;
    struct node *d=NULL;

    a=(struct node*)malloc(sizeof(struct node));
    b=(struct node*)malloc(sizeof(struct node));
    c=(struct node*)malloc(sizeof(struct node));
    d=(struct node*)malloc(sizeof(struct node));
    head=(struct node*)malloc(sizeof(struct node));

    a->data=1;
    a->next=b;
    b->data=2;
    b->next=c;
    c->data=3;
    c->next=d;
    d->data=4;
    d->next=NULL;

    head=a;
    Create(head);


    return 0;
}
