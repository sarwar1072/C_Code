#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node* next;
};
struct node* top=NULL;
int top=-1;
void Push(int data){
  struct node* temp=(struct node*)malloc(sizeof(struct node));
  temp->data=data;
  temp->next=top;
  top=temp;

}
void Pop(){

}
void PrintStack(){

}
