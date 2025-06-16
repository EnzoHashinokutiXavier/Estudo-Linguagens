#include <stdio.h>

int main(){
    int m, n, i, j, r;

    printf("Digite o valor de n em A(m x n) e V(n) : ");
    scanf("%d", &n);
    printf("Digite o valor de m em A(m x n) : ");
    scanf("%d", &m);

    float A[m][n], V[n], R[m];

    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            printf("Digite o valor de A[%d][%d] : ", i + 1, j + 1);
            scanf("%f", &A[i][j]);
        }
    }

    for (j = 0; j < n; j++){
        printf("Digite o valor de V[%d] : ", j + 1);
        scanf("%f", &V[j]);
    }

    for (i = 0; i < m; i++){
        r = 0;
        for(j = 0; j < n; j++){
            r += A[i][j] * V[j];
        }
        R[i] = r;
    }

    for (i = 0; i < m; i++){
        printf("\nReultado[%d] = %.2f", i + 1, R[i]);
    }

    return 0;
}