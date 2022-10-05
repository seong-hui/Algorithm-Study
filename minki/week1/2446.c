#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 1 ; i<= 2 * N - 1; i++)
    {
        for (int j = 1; j < 2 * N; j++)
        {
            if (i <= N)
            {
                if(i <= j && j <= 2*N - i)
                {
                    printf("*");
                }
                else if (j <= N)
                    printf(" ");
            }
            else
            {
                if(2*N - i <= j && j <= i)
                {
                    printf("*");
                }
                else if (j <= N)
                    printf(" ");
            }
        }
        printf("\n");
    }
}