#include <stdio.h>

int dp[1001];
int a[1001];

int increase(int n)
{
    int max = 1;
    for (int i = 0; i < n; i++) // /1~n까지 수열 전체 도는 반복문
    {
        dp[i] = 1;
        for (int j = 0; j < i; j++) // 0 ~ i-1까지 돌면서 i앞에 있는 모든 수열을 도는 반복문
        {
            if (a[i] < a[j] && dp[i] < dp[j] + 1) // 현재 수열에서 i인덱스에 위치하는 값보다 더 작은 값이 면 증가
            // 그리고 dp의 i번째 인덱스보다 j의 인덱스가 더 클때만 갱신
            {
                dp[i] = dp[j] + 1;
                if (dp[i] > max) //가장 길이 큰 수열 찾기
                    max = dp[i];
            }
        }
        // printf("[%d]\n", dp[i]);
    }
    printf("%d", max);
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    increase(n);
}