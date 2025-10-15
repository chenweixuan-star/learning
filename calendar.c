#include<stdio.h>
int main(){
    int year,month,day;

    printf("Please input the date:");
    scanf("%d/%d/%d",&year,&month,&day);

    printf("%04d/%02d/%02d",year,month,day);

    return 0;
}