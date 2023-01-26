#include <stdio.h>
#include <stdlib.h>
struct student
{
    int age;
    float height;
};
int main()
{
    // struct student s1;
    // s1.age=20;
    // s1.height=5.8;
    // printf("%d %f\n",s1.age,s1.height);
    //struct student * s2;
    // s2=&s1;
    //same
    // (*s2).age=26;
    // s1->age=26
    // (*s2).height=5.6;
    // s1->height=5.6;
    struct student *s1;
    s1=(struct student*)malloc(sizeof(struct student));
    s1->age=28;
    s1->height=6.1;

    //printf("%d %f\n",s1->age,s1->height);
    int ar[10]= {6,2,3,4,5};
//   printf("%d\n",*(ar+1));
    int i;
    for(i=0; i<5; i++)
    {
        printf("incrment of value 6 + %d : %d\n",i,(*ar+i));

    }
    for(i=0; i<5; i++)
    {
        printf("%d\n",*(ar+i));

    }
    return 0;
}
