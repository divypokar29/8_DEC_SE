#include<stdio.h>

struct employee{
    int empno;
    char empname[50];
    char address[100];
    int age;
};

int main(){
    struct employee e[5];
    int i;

    for(i=0;i<5;i++){
        printf("Enter Employee %d details\n",i+1);

        printf("Emp No: ");
        scanf("%d",&e[i].empno);

        printf("Name: ");
        scanf("%s",e[i].empname);

        printf("Address: ");
        scanf("%s",e[i].address);

        printf("Age: ");
        scanf("%d",&e[i].age);
    }

    printf("\nEmployee Information\n");

    for(i=0;i<5;i++){
        printf("\nEmp No: %d",e[i].empno);
        printf("\nName: %s",e[i].empname);
        printf("\nAddress: %s",e[i].address);
        printf("\nAge: %d\n",e[i].age);
    }

    
}