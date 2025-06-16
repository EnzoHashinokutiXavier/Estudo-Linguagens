#include <stdio.h>

int main(){
    int n;
    printf("Digite 1 ou 2\n");
    scanf("%d", &n);
    switch(n)
    {
    case 1:
        printf("um");
        break;
    case 2:
        printf("dois");
        break;
    }
    return 0;
}
