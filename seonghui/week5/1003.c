#include <stdio.h>

int dp1[50];
int dp2[50];

void fibo()
{
    dp1[0] = 1;
    dp1[1] = 0;
    dp2[0] = 0;
    dp2[1] = 1;
    for (int i = 2; i <= 40; i++)
    {
        dp1[i] = dp1[i - 1] + dp1[i - 2];
        dp2[i] = dp2[i - 1] + dp2[i - 2];
    }
}

int main()
{
    int n, m;
    scanf("%d", &n);
    fibo();

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        printf("%d %d\n", dp1[m], dp2[m]);
    }
}