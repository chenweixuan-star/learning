#include<stdio.h>
float test(float,float);
int main()
{
    float result=test(5,3);
    printf("%f",result);
    return 0;
}
float test(float a,float b)
{
    a=a+b;
    return a;
}