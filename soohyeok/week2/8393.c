#include <stdio.h>

int oton(int n)
{
    int i, sum;
    
    i = 0;
    sum = 0;
    while(i <= n)
    {
        sum += i;
        i++;
    }
    return (sum);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", oton(n));
}