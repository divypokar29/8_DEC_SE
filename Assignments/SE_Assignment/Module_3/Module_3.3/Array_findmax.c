#include<stdio.h>

int findMax(int arr[], int n){
    int max = arr[0];

    for(int i=1;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[10],n;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Maximum number = %d",findMax(arr,n));

    
}