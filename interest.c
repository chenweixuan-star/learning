#include<stdio.h>
int main(){
    float loan_amount,interest_rate,monthly_payment,monthly_interest,sum;

    printf("Enter amount of loan:");
    scanf("%f",&loan_amount);

    printf("Enter the rate of interest:");
    scanf("%f",&interest_rate);

    printf("Enter the monthly payment:");
    scanf("%f",&monthly_payment);

    monthly_interest=interest_rate/12e2;

    sum=loan_amount;
    sum=sum-monthly_payment+(sum*monthly_interest);
    printf("Balance remaining after first month:%.2f\n",sum);

    sum=sum-monthly_payment+(sum*monthly_interest);
    printf("Balance remaining after second month:%.2f\n",sum);

    sum=sum-monthly_payment+(sum*monthly_interest);
    printf("Balance remaining after third month:%.2f\n",sum);

    return 0;
}