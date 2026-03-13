#include<stdio.h>

int main(){
    int a[5],b[5],i,j,temp,choice;

    printf("Enter 5 elements of first array:\n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    printf("Enter 5 elements of second array:\n");
    for(i=0;i<5;i++)
        scanf("%d",&b[i]);

    printf("1.Ascending\n2.Descending\n");
    printf("Enter choice: ");
    scanf("%d",&choice);

    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){

            if(choice==1){
                if(a[i] > a[j]){
                    temp=a[i]; a[i]=a[j]; a[j]=temp;
                }
                if(b[i] > b[j]){
                    temp=b[i]; b[i]=b[j]; b[j]=temp;
                }
            }

            if(choice==2){
                if(a[i] < a[j]){
                    temp=a[i]; a[i]=a[j]; a[j]=temp;
                }
                if(b[i] < b[j]){
                    temp=b[i]; b[i]=b[j]; b[j]=temp;
                }
            }
        }
    }

    printf("Sorted First Array:\n");
    for(i=0;i<5;i++)
        printf("%d ",a[i]);

    printf("\nSorted Second Array:\n");
    for(i=0;i<5;i++)
        printf("%d ",b[i]);

    
}