#include <stdio.h>

int main()
{
    int x, y, ret, day, ans;
    ret = 0;
    day = 0;
    scanf("%d %d", &x, &y);
    for (int i = 0; i< x; i++){
        if (i == 1 || i == 3 || i==5 || i == 7 ||i == 8 || i== 10 || i==12){
            day = 31;
        }
        else if (i == 4 || i == 6 || i==9 || i== 11)
        {
            day = 30;
        }
        else if (i == 2)
        {
            day = 28;
        }
        ret += day;
    }
    ret += y;
    ret = ret % 7;
    switch(ret){
        case 0:
            printf("SUN");
            break;
        case 1:
            printf("MON");
            break;
        case 2:
            printf("TUE");
            break;
        case 3:
            printf("WED");
            break;
        case 4:
            printf("THU");
            break;
        case 5:
            printf("FRI");
            break;
        case 6:
            printf("SAT");
            break;
    }
    return 0;
}
