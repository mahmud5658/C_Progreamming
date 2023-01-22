#include<stdio.h>

int main(){

    int arr[10];

    printf("Input the array elements: ");

    for(int i=0;i<10;i++){

        scanf("%d",&arr[i]);

    }

    printf("Array elements is : ");

    for(int i=0;i<10;i++){

        printf("%d\t",arr[i]);

    }
    return 0;
}