#include <stdio.h>

long long dp[100];

void binary()
{
    dp[1] = 1;
    dp[2] = 1;

    for (int i = 3; i <= 90; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
}

int main()
{
    int n;

    binary();
    scanf("%d", &n);
    printf("%lld", dp[n]);
}