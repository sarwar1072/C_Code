#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};

struct node* head;

void Traverse(int value)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->link=NULL;
    if(head !=NULL)
    temp->link=head;
    head=temp;

}

void printLinkList()
{
    struct node* temp;
    temp=head;
    printf("print List: ");
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
    printf("\n");
}
int main()
{
    head= NULL;
    int value,i,n;
    printf("How many node you want to add: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
    printf("Enter Number: ");

        scanf("%d",&value);
        Traverse(value);
        printLinkList();
    }
    return 0;
}
