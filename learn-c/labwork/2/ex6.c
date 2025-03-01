#include <stdio.h>
int main() {
    int month;
    printf("Type the month :");
    scanf("%d",&month);
    switch (month)
    {
    case 1:
        printf("%d have 31 days",month);
        break;
    case 2:
        printf("%d have 28 or 29 days",month);
        break;
    case 3:
        printf("%d have 31 days",month);
        break;
    case 4:
        printf("%d have 30 days",month);
        break; 
    case 5:
        printf("%d have 31 days",month);
        break;
    case 6:
        printf("%d have 30 days",month);
        break;  
    case 7:
        printf("%d have 31 days",month);
        break;
    case 8:
        printf("%d have 30 days",month);
        break;  
    case 9:
        printf("%d have 30 days",month);
        break;  
    case 10:
        printf("%d have 31 days",month);
        break;
    case 11:
        printf("%d have 30 days",month);
        break;  
    case 12:
        printf("%d have 31 days",month);
        break;    
    }

    
    
    
}