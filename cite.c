#include<stdio.h>
void swap(int x,int y);void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main(int argc,char*argv[])
{
    int a=1;
    int b=2;
    swap(a,b);//调用交换函数
    printf("交换结果为a=%d,b=%d\n",a,b);
    return 0;
}