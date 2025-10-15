/*output.1*/
#include<stdio.h>

int main(){
    int n=6;

    for(int i=1;i<=n;i++){

        for(int j=1;j<i;j++){
            printf(" ");
        }
        printf("*");
        if(i<n){
            int spaces=2*(n-i)-1;
            for(int k=0;k<spaces;k++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}