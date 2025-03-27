#include <stdio.h>

int main()
{
    // кол-во хвойных уровней
    int x;
    
    printf("Введите кол-во хвойных уровней");
    scanf("%d", &x);
    
    //Уровни елочки
    for (int i = 1; i < x; i++) {
        
        printf(" ");
        for (int j =0; j < x - i; j++ ) {
            printf(" ");
        }
        
        for (int k = 0; k < 2 * i - 1; k++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < x; j++) {
            printf(" ");
        }
        printf("*\n");
    }
    return 0;
}
