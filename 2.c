#include <stdio.h>

int main() {
    int days, start_day;
    
    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week(1=Sun, 7=Sat): ");
    scanf("%d", &start_day);
    
    
    printf("日\t一\t二\t三\t四\t五\t六\n");
    
    
    for (int i = 1; i < start_day; i++) {
        printf("\t");
    }
    
    
    int weekday = start_day; 
    for (int day = 1; day <= days; day++) {
        printf("%2d\t", day);
        
        
        if (weekday == 7) {
            printf("\n");
            weekday = 1;
        } else {
            weekday++;
        }
    }
    
    
    printf("\n");
    
    return 0;
}