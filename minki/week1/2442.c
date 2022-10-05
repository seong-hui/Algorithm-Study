#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i <N*2; i+=2) {
        for (int j = N-1-i/2; j >0; j--) {
            printf(" ");
        }
        for (int j = 0; j < i+1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}