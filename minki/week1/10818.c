#include <stdio.h>

int main()
{
    int N, temp, max, min;
    scanf("%d", &N);
    for (int i=0 ; i < N; i++){
        scanf("%d", &temp);
        if ( i == 0 )
        {
            min = temp;
            max = temp;
        }
        if (temp < min)
            min = temp;
        else if (temp > max)
            max = temp;
    }
    printf("%d %d", min, max);
}
