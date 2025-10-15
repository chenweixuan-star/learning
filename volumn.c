#include <stdio.h>
int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;
	char plus_sign;
	printf("Enter two fractions with a plus sign between them: ");
	scanf("%d/%d/%c%d/%d", &num1, &denom1,&plus_sign,&num2,&denom2);

	result_num = num1*denom2 + num2*denom1;
	result_denom = denom1*denom2;
	printf("The sum is %d/%d\n", result_num, result_denom);

	return 0;
}