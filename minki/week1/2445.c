#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 1 ; i<= 2 * N - 1; i++)
    {
        for (int j = 1; j <= 2 * N; j++)
        {
            if (i <= N)
            {
                if(j <= i || j > 2*N - i)
                {
                    printf("*");
                }
                else
                    printf(" ");
            }
            else
            {
                if(j <= 2*N - i  || j > i)
                {
                    printf("*");
                }
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}