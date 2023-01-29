#include<stdio.h>
#include<stdlib.h>
#define size 100
int  top = -1;
int stack[size];

void push(int x)
{
    if(top>=size)
        return;
    stack[++top]=x;
}

int pop()
{
    if(top==-1)
        return -1;
    return stack[top--];
}

void display()
{
    for(int i=0 ; i<=top ; i++)
        printf("%d ",stack[i]);
    printf("\n\n");
}

int main()
{
    printf("Pushing elements into the stack\n1\n2\n3\n\n");

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    printf("Displaying elements of the stack -\n");

    display();
    printf("Pop the top of the stack = %d\n\n",pop());

    printf("Pop the top of the stack = %d\n\n",pop());

    printf("Displaying elements of the stack -\n");

    display();

    return 0;
}
