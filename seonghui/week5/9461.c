#include <stdio.h>

long long dp[101];

void p()
{
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    dp[5] = 2;

    for (int i = 6; i <= 100; i++)
    {
        dp[i] = dp[i - 5] + dp[i - 1];
    }
}

int main()
{
    int n, m;

    p();
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        printf("%lld\n", dp[m]);
    }
}