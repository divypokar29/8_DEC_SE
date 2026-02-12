
#include<stdio.h>
main(){
    FILE *fp; //file pointer

    fp =fopen("myfile.txt","w");

    //write a content in existing file 
    fprintf(fp,"HELLO WELCOM TO MY FIRST FILE ");

    fclose(fp);
}