#include <stdio.h>

int main()
{
    int i,T,a,b;
    char c;

    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        scanf("%d%c%d", &a, &c, &b);
        printf("%d\n", a + b);
    }
}