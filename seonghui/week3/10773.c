#include <stdio.h>
#include <string.h>

#define max 10000
int stack[max];
int idx = 0;

void push(int m)
{
    stack[idx++] = m;
}

void empty()
{
    if (idx == 0)
        printf("%d\n", 1);
    else
        printf("%d\n", 0);
}

void pop()
{
    if (idx != 0)
        stack[--idx] = 0;
}

int main()
{
    int n, m, sum=0;
    char a[10];

    scanf("%d", &n);
    for(int i = 0;i<n;i++)
    {
        scanf("%d", &m);
        if(m== 0)
            pop();
        else
            push(m);

    }
    for(int i = 0;i<idx;i++)
    {
        sum += stack[i];
    }
    printf("[%d]\n", sum);

}