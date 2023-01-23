#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *head;
void CreateList(int n)
{
    struct node *newnode,*temp;
    int data,i;
    head=(struct node*)malloc(sizeof(struct node));

    if(head==NULL)
    {
        printf("not allocated");
        exit(0);
    }
    printf("Enter data of the node 1:");
    scanf("%d",&data);

    head->data=data;
    head->next=NULL;

    temp=head;
    for(i=2; i<=n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
            printf("Unable to allocate memory");
            break;
        }

        scanf("%d",&data);
        newnode->data=data;
        newnode->next=NULL;

        temp->data=data;
        temp=temp->next;
    }

}
void Traverse()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

}
int main()
{
    int n;
    printf("Enter node number: ");
    scanf("%d",&n);
    CreateList(n);
    printf("\nData in the list \n");

    Traverse();
    return 0;
}
