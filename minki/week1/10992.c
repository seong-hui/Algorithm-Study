#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i< N; i++){
        for (int j = 0 ; j< N + i; j++){
            if (i == N -1)
                printf("*");
            else if (j < N - i - 1) {
                printf(" ");
            }
            else if (j == N - i - 1 || j == N + i - 1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}