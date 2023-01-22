#include<stdio.h>

int main(){

    int n;

    printf("Enter a number: ");

    scanf("%d",&n);

    for(int i=1;i<=n;i++){

        if (i==5){

            break;

        }

        printf("%d\t",i);

    }
    return 0;
}