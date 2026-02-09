#include <stdio.h>
struct Student
{
	int id;
	char name[20];
	int marks[3];// array within structure
	

};

main()
{
// structure variable declaration
struct Student s1[3]; // array of structure

int i,j;
printf("\n Enter student detailes :::: \n");

for (i=0;i<3;i++){
	printf("\n Enter student %d id : ",i+1);
	scanf("%d",&s1[i].id);
	getchar();
	printf("\n Enter student name : ");
	gets(s1[i].name);
	  for(j=0;j<3;j++){
	  	printf("\n\t\tEnter subject %d marks ",j+1);
	  	scanf("%d",&s1[i].marks[j]);
	  }
}
	printf("\n DISPLAY STUDENT DETAILES ::: ");

for (i=0;i<3;i++){
	printf("\n -------------- Student %d detailes--------- : ",i+1);
	printf("\n ID : %d",s1[i].id);
	printf("\n NAME : %s",s1[i].name);
	  for(j=0;j<3;j++){
	  	printf("\n SUBJECT %d SCORE :%d  ",j+1,s1[i].marks[j]);
	  }
}		 

}
