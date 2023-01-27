#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node* head;
void Insert(int value,int n)
{
    int i;
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->link=NULL;
    if(n==1)
    {
        temp->link=head;
        head=temp;
        return;
    }
    struct node* temp2=head;
    for(i=0;i<n-2;i++){
        temp2=temp2->link;
    }
    temp->link=temp2->link;
    temp2->link=temp;

}
void Printf()
{
    struct node* temp;
    temp=head;
    printf("Add list: ");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
}
int main()
{
    head=NULL;
    Insert(3,1);
    Insert(2,1);
    Insert(1,1);
    Insert(0,1);
    Insert(-2,2);
    Insert(-3,3);


    Printf();
    return 0;

}
