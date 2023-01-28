#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
} ;
struct node* head;
void Insert(int n)
{
    struct node *temp,*newNode;
    int data,i;
    head=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;
    temp=head;
    for(i=1; i<n; i++)
    {
        newNode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&data);
        newNode->data=data;
        newNode->next=NULL;
        temp->next=newNode;
        temp=temp->next;
    }
}
void Traverse()
{
    struct node* temp;
    temp=head;
    printf("Print list: ");
    while(temp !=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void Delete(int pos)
{
    struct node* temp1=head;

    int i;
    if(pos==1)
    {
        head=temp1->next;
        free(temp1);

    }
    else
    {
        for(i=1; i<=pos-2; i++)
        {
            temp1=temp1->next;
        }
        struct node* temp2=temp1->next;
        temp1->next=temp2->next;
        free(temp2);
    }
}
int main()
{
    int n;
    printf("Input number of node: ");
    scanf("%d",&n);
    Insert(n);
    Traverse();
    Delete(2);
    printf("\n");
    Traverse();

    return 0;
}
