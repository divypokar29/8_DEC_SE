/*
nested structure :when structure call inside the sreucture 
there are 2 ways to write nested structure 

1) struct <structurename>
    {
      field 
      struct <structureinner>
      {
        field;
	  }innerobj;
	}outerobj;
	
	
2) structure <strructure 1>
   {
   
   };
   struct <2 structure >
   {
     field
     struct structure 1 obj;
    }obj;
*/
	#include <stdio.h>
	struct Addres
	{
	  char city[20];
	  int pincode;	
	};
	struct Student
	{
	   int id;
	   char name[20];
	   struct Addres add;
	};
	struct Employ
	{
		int id;
		char employname[20];
		struct Addres add;
	};
	
	main()
	{
		struct Student s1;
		
		printf("\n Enter student id :");
		scanf("%d",&s1.id);
		getchar();
		printf("\n Enter student name :");
		gets(s1.name);
		printf("\n\tEnter student Address ::: \n");
		printf("\n\t\t Enter City :");
		gets(s1.add.city);
		printf("\n\t\tEnter Pincode :");
		scanf("%d",&s1.add.pincode);
	
	
	printf("\nStudent detailes ::");
	printf("\n ID :%d",s1.id);
	
	printf("\n Name : %s",s1.name);
	printf("\n Address ::");
	printf("\n \tCity : %s",s1.add.city);
	printf("\n \tPincode : %d",s1.add.pincode);
	}
