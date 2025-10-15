/*addfrac.c*/
#include <stdio.h>

int main()
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    char plus_sign;
    
    printf("Enter two fractions separated by a plus sign (e.g., 5/6+3/4): ");
    scanf("%d/%d%c%d/%d", &num1, &denom1, &plus_sign, &num2, &denom2);
    
    // 验证加号是否正确
    if (plus_sign != '+') {
        printf("Error: Expected '+' sign but found '%c'\n", plus_sign);
        return 1;
    }
    
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}