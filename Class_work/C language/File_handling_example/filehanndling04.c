#include<stdio.h>
main(){
    FILE *fp; //file pointer
    char name[20];
    char subject[20];
    fp =fopen("myfile2.txt","w");

 printf("Enter name:\n");
 gets(name);
 
 printf("Enter subject : ");
 gets(subject);
 
 fprintf(fp,"name : %s\n",name);
  fprintf(fp,"subject : %s\n",subject);
 fclose(fp);
}