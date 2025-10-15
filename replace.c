#include<stdio.h>
#include<string.h>
#define MAX_LEN 1000

int main(){
    char a,b;
    char s[MAX_LEN];

    a=getchar();
    getchar();
    b=getchar();
    getchar();

    fgets(s,MAX_LEN,stdin);

    int len=strlen(s);
    if(s[len-1]=='\n'){
        s[len-1]='\0';

        for(int i=0;s[i]!='\0';i++){
            if(s[i]==a){
                putchar(b);
            }else if(s[i]==b){
                putchar(a);
            }else{
                putchar(s[i]);
            }
        }
    }
    putchar('\n');
    return 0;
}