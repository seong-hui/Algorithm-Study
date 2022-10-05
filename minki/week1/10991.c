#include <stdio.h>

int main()
{
    int N, flag;
    scanf("%d", &N);
    for (int i = 0; i< N; i++){
        flag = 0;
        for (int j = 0 ; j< N + i; j++){
            if (j < N - i - 1) {
                printf(" ");
            }
            else if (flag == 0) {
                printf("*");
                flag = 1;
            }
            else if (flag == 1) {
                printf(" ");
                flag = 0;
            }
        }
        printf("\n");
    }
}