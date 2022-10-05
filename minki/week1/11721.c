#include <stdio.h>
int main()
{
    char c[101];
    int cnt = 0;
    scanf ("%s", c);
    while (c[cnt])
    {
        printf("%c", c[cnt++]);
        while (cnt % 10 != 0 && c[cnt])
        {
            printf("%c", c[cnt++]);
        }
        printf("\n");
    }
    return 0;
}