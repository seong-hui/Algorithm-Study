#include <stdio.h>

int dp[100001];
int arr[100001];

#define max(x, y) ((x) > (y) ? (x) : (y))

void add(int n)
{
    int max1 = -1000;
    dp[0] = arr[0];
    max1 = max(max1, dp[0]);

    for (int i = 1; i < n; i++)
    {
        dp[i] = max(dp[i - 1] + arr[i], arr[i]);
        max1 = max(max1, dp[i]);
    }
    printf("%d", max1);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    add(n);
}