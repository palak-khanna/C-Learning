#include <C:\Palak\C LEARNING\Functions.h>
#include <stdio.h>

int getINT(int myInt)
{
    printf("You have given input %d \n", myInt);
    return myInt;
}
void main()
{
    int ireturnVal = getINT(2);
    printf("The return value is = %d\n",ireturnVal);

}