#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 1 ; i<= 2 * N - 1; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i <= N)
            {
                if(j > N - i)
                {
                    printf("*");
                }
                else
                    printf(" ");
            }
            else
            {
                if(j <= i - N)
                {
                    printf(" ");
                }
                else
                    printf("*");
            }
        }
        printf("\n");
    }
}