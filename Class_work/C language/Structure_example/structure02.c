#include <stdio.h>
struct Student
{
	int id;
	char name[20];
	char subject[20];
	

};

main()
{
	struct Student s1; //variable creaation
	
	printf("\n Enter student detailes :: \n");
	
	printf("\n Enter id: ");
	scanf("%d",&s1.id);
	
	getchar();
	
	printf(" \nEnter name : ");
	gets(s1.name);
	
	printf(" \nsubject : ");
	gets(s1.subject);
	
	printf("\n Student detailes :");
	printf("\n id : %d",s1.id);
	printf("\n name : %s",s1.name);
	printf("\n subject : %s",s1.subject);
	
}
