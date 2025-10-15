#include<stdio.h>
#include<string.h>

int main() {
    char charA, charB;
    char strC[10000];
    int i = 0;

    printf("\n");
    scanf("%c %c %s", &charA, &charB, strC);

    while (strC[i] != '\0') {
        if (strC[i] == charA) {
            strC[i] = charB;
        }
        else if (strC[i] == charB) {
            strC[i] = charA;
        }
        i++;
    }

    printf("%s\n", strC);
    return 0;
}