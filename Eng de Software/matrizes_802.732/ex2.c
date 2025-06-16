#include <stdio.h>

int main(){
    int n, m, p, i, j, k, r;
    printf("Digite o valor de m em A(m x n) :\n");
    scanf("%d", &m);
    printf("Digite o valor de n em A(m x n) e B(n x p) :\n");
    scanf("%d", &n);
    printf("Digite o valor de p em B(n x p) :\n");
    scanf("%d", &p);

    float A[m][n], B[n][p], R[m][p];

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("Digite o valor de A[%d][%d] : ", i+1, j+1);
            scanf("%f", &A[i][j]);
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < p; j++){
            printf("Digite o valor de B[%d][%d] : ", i+1, j+1);
            scanf("%f", &B[i][j]);
        }
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < p; j++){
            r = 0;
            for(k = 0; k < n; k++){
                r += A[i][k] * B[k][j];
            }
            R[i][j] = r;
        }
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < p; j++){
            printf("\nResultado[%d][%d] : %.2f", i+1, j+1, R[i][j]);
        }
    }
    
    return 0;
}