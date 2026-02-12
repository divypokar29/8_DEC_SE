
#include<stdio.h>
main(){
    FILE *fp; //file pointer

    fp =fopen("myfile.txt","w");

    //write a content in existing file 
    fprintf(fp,"name : c language \n");
    fprintf(fp,"score : 85 \n");
    printf("succesfully !!");
    fclose(fp);
}