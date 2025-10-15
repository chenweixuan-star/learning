#include<stdio.h>

void swap(int*x,int *y)
{
    int tem=*x;
    *x=*y;
    *y=tem;
}
int main()
{
    int a=6,b=8;
   
    printf("交换前：%d %d\n",a,b);
    swap(&a,&b);
    printf("变换后：%d %d\n",a,b);
    return 0;
}