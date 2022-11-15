#include <stdio.h>

long long dp[1001];

void n_2()
{
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= 1000; i++)
        dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
}

int main()
{
    int n;

    n_2();
    scanf("%d", &n);
    printf("%lld\n", dp[n]);
}