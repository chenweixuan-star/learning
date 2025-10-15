#include<stdio.h>
int main(){
    int bills_20,bills_10,bills_5,bills_1,amount;

    printf("Enter a dollor amount:");
    scanf("%d",&amount);

    bills_20=amount/20;
    amount=amount%20;

    bills_10=amount/10;
    amount=amount%10;

    bills_5=amount/5;
    amount=amount%5;

    bills_1=amount;

    printf("$20 bills:%d\n",bills_20);
    printf("$10 bills:%d\n",bills_10);
    printf("$5 bills:%d\n",bills_5);
    printf("$1 bills:%d\n",bills_1);

    return 0;
}