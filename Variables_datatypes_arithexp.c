#include <stdio.h>
/*write a program to conert fara to cel*/
int main1()
{
    int i = 10;
    i++;
    //i = i+1
    printf("This is the value of ++i %d\n", i);
    i++;
    printf("This is the value of i++ %d\n", i);

/*factorial*/

    // int i;
    // int n=1;
    // for (i=1; i<6; ++i)
    // {
    //     n=n*i;
    // };
    // printf("the factorial 5 is \n%d ",n);
}

/*conversion of fara to cel*/
float main2()
{
    float fara=100.0;

    // printf("Enter the value of temp you want to convert :\n");
    
    // scanf("%f",&fara);

    float c= ((fara-32)*5)/9;
    printf("conversion of %f degree fara to cel is \n%f",fara,c);
}

/*usage of %d in place of %f*/
float main()
{
    float fara=100.0;

    // printf("Enter the value of temp you want to convert :\n");
    
    // scanf("%f",&fara);

    float c= ((fara-32)*5)/9;

    printf("Printing in float :: \n");
    float fFara = (float) fara;
    float fCell = (float) c;
    printf("conversion of %f degree fara to cel is %f \n", fFara, fCell);

    printf("Printing in Integer :: \n");
    int iFara = (int) fara;
    int iCell = (int) c;
    printf("conversion of %d degree fara to cel is %d \n", iFara, iCell);

    printf("Printing in 6d in Integer :: \n");
    iFara = (int) fara;
    iCell = (int) c;
    printf("conversion of %6d degree fara to cel is %6d \n", iFara, iCell);

    printf("Printing in 6f in float :: \n");
    fFara = (float) fara;
    fCell = (float) c;
    printf("conversion of %6f degree fara to cel is %6f \n", fFara, fCell);

    printf("Printing in .2f float :: \n");
    fFara = (float) fara;
    fCell = (float) c;
    printf("conversion of %.2f degree fara to cel is %.2f \n", fFara, fCell);

    printf("Printing in 6.2f float :: \n");
    fFara = (float) fara;
    fCell = (float) c;
    printf("conversion of %6.2f degree fara to cel is %6.2f \n", fFara, fCell);
    
}
/*OUTPUT
conversion of 0 degree fara to cel is 
1079574528
*/

/*usage of %6d in place of %f*/
