#include <stdio.h>
#include <ctype.h>
#define START 0
#define STOP 10
#define STEP 1

void checkDataTypeSize()
{
    int i = 100;
    printf("Size of integer i = %d \n",sizeof(int));

    unsigned int ui = 100;
    printf("Size of unsigned integer ui = %d \n",sizeof(unsigned int));

    float fdata = 100.199;
    printf("Size of float fdata = %f \n",sizeof(float));

    double dblData = 100.10008;
    printf("Size of  dblData = %d \n",sizeof(double));

    long longData = 100;
    printf("Size of longData = %d \n",sizeof(long));

    char chData = 'C';
    printf("Size of chData = %d \n",sizeof(char));
}


float ConersionFaraToCel()
{
    //checkDataTypeSize();
    // conersion of cel to fara 
    
    int i=0;
    float celcius = 0.0;
    for (i = 0; i<6; i++ )
    {
        celcius = (float) (i-32)*5/9;
        printf("For %d degree fara it is %6f dgree celcius.\n", i, celcius);
    };
}

float CheckDefineFunction()
{
    int i=0;
    float celcius = 0.0;
    const int myConst = 10;
    //i = 0; i<11; i = i+2
    for (i = START; i<STOP; i=i+STEP)
    {
        //myConst = i; error as constant value never changes 
        celcius = (float) (i-32)*5/9;
        printf("For %d degree fara it is %6f dgree celcius.\n", i, celcius);
    };
}

char ConvertToOpp()
{
    // char myChar;
    // printf("Enter any charater:\n");
    // scanf("%c", &myChar);
    char myChar ='A';

    if (isupper(myChar) == 1)
    {
        printf("%c%c", myChar, tolower(myChar));
    }
    else
    {
        printf("%c%c", myChar, toupper(myChar));
    }
}

char ConvertToOppBasicLOL(char ch)
{
    if (ch == 'A')
    {
        return 'a';
    }
    else if (ch == 'B')
    {
        return 'b';
    }
    else if (ch == 'C')
    {
        return 'c';
    }
    else if (ch == 'D')
    {
        return 'd';
    }
    else if (ch == 'E')
    {
        return 'e';
    }
    else if (ch == 'a')
    {
        return 'A';
    }
    else if (ch == 'b')
    {
        return 'B';
    }
    else if (ch == 'c')
    {
        return 'C';
    }
    else if (ch == 'd')
    {
        return 'D';
    }
    else if (ch == 'e')
    {
        return 'E';
    }

}

char UsingSwitchCase(char ch)
{
    char mych = 'z';
    switch (ch)
    {
        case 'A':
            mych = 'a';
            break;
        case 'B':
            mych = 'b';
            break;
        case 'C':
            mych = 'c';
            break;
        default:
            mych = 'd';
            break;
    }
    return mych;
}

void main()
{
    char ch='A';
    ch = UsingSwitchCase(ch);
    printf("%c",ch);
}