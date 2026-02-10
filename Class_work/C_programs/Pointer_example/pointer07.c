

#include<stdio.h>
struct student
{
    int id;
    char name[20];
};

main()
{
 //structure variable declarestion
 struct student s1;
 // pointer variable declaration
 struct student *p = &s1;

 // note : when we access structure member using of structure variable we have to use 
 // .(dot operater ) e.g. s1.name 


 //not : when we want to access structure member using a pointer 
 //variable we have use ->(arrow operator) e.g. p1 -> name,
 
printf("Enter Id :");
scanf("%d",&p->id);

printf("Enter name : ");
gets(p->name);
getchar();

printf("\n ID : %d",p->id);
printf("\n Name : %s",p->name);

}