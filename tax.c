#include<stdio.h>
int main(){
    float amount,tax,sum;

    printf("Enter an amount:");
    scanf("%f",&amount);

    tax=0.05f;
    sum=amount+(tax*amount);

    printf("with tax added:%.2f\n",sum);

    return 0;
}