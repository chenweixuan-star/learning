/*finger-gussing.c*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int user,computer;

    printf("猜拳游戏:0-石头,1-剪刀,2-布\n");
    while(1){
        printf("请输入你的选择(0/1/2):");
        scanf("%d",&user);

        computer=rand()%3;
        printf("电脑出:%d\n",computer);

        if((user==0 && computer==1)||(user==0 && computer==2)||(user==2 && computer==0)){
            printf("你赢了！游戏结束。\n");
            break;
        }
        else if(user==computer){
            printf("平局，再来一次！\n");
        }else{
            printf("你输了，继续努力！\n");
        }
    }
    return 0;
}