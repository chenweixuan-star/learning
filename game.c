#include<stdio.h>
#define TARGET 750
int main(){
    int n;
    scanf("%d",&n);

    int total=0;
    for( int i=1;i<=n;i++){
        int s;
        scanf("%d",&s);
        if(s<TARGET){
            total+=TARGET-s;
        }
    }
     printf("%d\n",total);
     return 0;
}