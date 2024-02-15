#include <stdio.h>
void main1()
{
    printf("testing....\n...3\n..2\n.1\n");
}
int main2()
{
    int sum = 50+25;
    printf("The sum of 50 and 25 is %d\n",sum);
}
int main3()
{
    int value1, value2, sum;
    value1 = 30;
    value2 = 40;
    int sum1 = value1+value2;
    value1 = value2 =50;
    sum = value1+value2;
    printf("initial sum is%d\n",sum1);
    printf("new sum of %d and %d is %d\n",87,15,sum);
}

void main()
{
    printf("This is my first program.\n");
    printf("Programmong in C is fun.\n");
    main1();
    main2();
    main3();
}

