#include <stdio.h>

int factorialWithoutRECURSION(unsigned int n)
{
    int x = 1;
    for (int i=1; i<=n; i++)
    {
        x = i*x;
    }
    return x;
}

// int factorialWithRECURSION(unsigned int n)
// {
//     int y = y*1;
//     int x = 1;
//     if (x<n){
//         x = y*n;
//         return x;
//         y = factorialWithRECURSION(n);
//     }
//     factorialWithRECURSION(n-1);
// }

int factorialWithRECURSION(unsigned int n)
{

    if (n == 1 || n==0)
        return 1;
    else
        return n * factorialWithRECURSION(n-1);
}

void main()
{
    unsigned int y= 6;
    int retval = factorialWithRECURSION(y);
    printf("the factorial of %d is : %d\n", y,retval);
}