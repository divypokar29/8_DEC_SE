 #include <stdio.h>
struct Student
{
	int id;
	char name[20];
	char subject[20];
	

};

main()
{
	//array of structure 
	//we want to accept multiple student detailes 
	struct Student s1[3]; //variable creaation
	int i;
	printf("\n Enter student information :: \n");
	for(i=0;i<3;i++){
		
		printf("\n Enter id :");
		scanf("%d",&s1[i].id);
		getchar();
	
		printf("\n Enter name : ");
		gets(s1[i].name);
		
		printf("\n Enter subject : ");
		gets(s1[i].subject);
		
	}
	
		
	printf("\n Student detailes :");

	for(i=0;i<3;i++){
		
		printf("\n id :%d",s1[i].id);
	    printf("\n name :%s",s1[i].name);
	    printf("\n subject :%s",s1[i].subject);
	    printf("\n --------------------");
	}
}
