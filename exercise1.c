#include<stdio.h>
int main(){
    int g,s,b;

    for(b=1;b<=4;b++){
        for(s=1;s<=4;s++){
            for(g=1;g<=4;g++){
                printf("%d%d%d\n",b,s,g);
            }
        }
    }
    return 0;
}