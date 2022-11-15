#include <stdio.h>

int dp[20];

void add()
{
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i = 4; i <= 11; i++)
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
}

int main()
{
    int n, m;

    add();
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        printf("%d\n", dp[m]);
    }
}