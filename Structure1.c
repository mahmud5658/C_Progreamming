#include<stdio.h>
#include<string.h>

struct student{

    int serial;
    char name[20];
    char  id[15];

};

int main(){

    struct student s1;
    struct student s2;

    s1.serial = 7373;
    strcpy(s1.name,"Abdullah");
    strcpy(s1.id,"221-15-5658");

    s2.serial = 5894;
    strcpy(s2.name,"Akash");
    strcpy(s2.id,"221-15-5658");
  

    printf("s1 serial : %d\n",s1.serial);
    printf("s1 name : %s\n",s1.name);
    printf("s1 ID : %s\n",s1.id);
    printf("s2 serial : %d\n",s2.serial);
    printf("s2 name : %s\n",s2.name);
    printf("s2 ID : %s\n",s2.id);

}