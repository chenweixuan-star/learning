#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#ifdef _WIN32
#include <windows.h>
#define CLEAR_SCREEN() system("cls")
#define SLEEP_MS(ms) Sleep(ms)
#else
#include <unistd.h>
#define CLEAR_SCREEN() system("clear")
#define SLEEP_MS(ms) usleep(ms * 1000)
#endif

#define EVER ;;

typedef struct {
    const char* message;
    int duration;
} Heartbeat;

const Heartbeat declarations[] = {
    {"在二进制世界里", 1000},
    {"你是我唯一的异常", 2000},
    {"就像栈溢出", 1000},
    {"你占据我所有内存", 2000},
    {"我的算法", 1000},
    {"永远无法将你排序", 2000},
    {"你是我的", 1000},
    {"终极递归", 2000}
};

void eternal_loop() {
    int i = 0;
    for (EVER) {
        CLEAR_SCREEN();
        printf(">>> 第%d次心跳 <<<\n\n", ++i);

        for (int j = 0; j < sizeof(declarations) / sizeof(declarations[0]); j++) {
            printf("%s", declarations[j].message);
            fflush(stdout);
            SLEEP_MS(declarations[j].duration);
            printf("\n");
        }

        printf("\n正在计算爱的概率...");
        fflush(stdout);
        SLEEP_MS(2000);

        srand((unsigned int)time(NULL));
        int probability = 100 + rand() % 900;
        printf("\r我们相爱的概率：%d.%d%%\n\n", probability / 10, probability % 10);

        SLEEP_MS(3000);

        printf("内存状态：");
        for (int k = 0; k < 10; k++) {
            printf("*");
            fflush(stdout);
            SLEEP_MS(100);
        }
        printf(" 100%%\n");

        printf("\n-- 按下Ctrl+C停止此永恒循环 --\n");
        SLEEP_MS(5000);
    }
}

int main() {
    printf("初始化心跳程序...\n");
    SLEEP_MS(2000);
    printf("启动永恒誓言循环...\n\n");
    SLEEP_MS(2000);

    eternal_loop();

    return 0;
}