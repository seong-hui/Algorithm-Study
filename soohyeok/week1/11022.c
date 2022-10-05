#include <stdio.h>

int main()
{
    int i,T,a,b;

    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", i + 1, a, b, a + b);
    }
}