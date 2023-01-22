// this program will find out if a number is positive or negative 

#include<stdio.h>

int main(){

    int num;

    printf("Enter a number: ");

    scanf("%d",&num);

    if(num>0){

        printf("The value is a positive number. \n");

    }

    else if(num<0){

        printf("The value is a negative number.\n");

    }

    else {

        printf("The value is zero");
    }

    return 0;
}