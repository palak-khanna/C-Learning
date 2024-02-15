#include <stdio.h>

void UsingEnum(int wday)
{
    enum weekdays{MON=10,TEUS=5,WED=10,THURS,FRI,SAT,SUN};
    switch (wday)
    {
    case 0:
        printf("%d",MON);
        // MON = 15;
        break;
    case 1:
        printf("%d",TEUS);
        break;
    case 2:
        printf("%d",WED);
        break;
    case 3:
        printf("%d",THURS);
        break;
    case 4:
        printf("%d",FRI);
        break;
    case 5:
        printf("%d",SAT);
        break;
    case 6:
        printf("%d",SUN);
        break;
    default:
        break;
    }
}

void main()
{
    int i = 0;
    UsingEnum(i);
}