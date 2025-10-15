#include<stdio.h>
#include<math.h>

int main(){
    double x,y;
    double a=1.0;

    for(y=2.0;y>=-2.0;y-=0.1){
        for(x=-2.0;x<=2.0;x+=0.05){
            double temp=x*x+y*y-a*a;

            if(temp*temp*temp-x*x*y*y*y<=0.0){
                printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }

        return 0;
    }