#include <stdio.h>

void main(){
    int x, y;
    printf("X : ");
    scanf("%d", &x);
    printf("Y : ");
    scanf("%d", &y);
    printf("X / Y = %.2f", (float) x / y);
}