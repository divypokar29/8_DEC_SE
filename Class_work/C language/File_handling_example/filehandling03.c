#include<stdio.h>
main(){
    FILE *fp; //file pointer
    char ch;
    fp =fopen("myfile.txt","r");

 while((ch=fgetc(fp)) != EOF)
 {
 	printf("%c",ch);
 }
 fclose(fp);
}