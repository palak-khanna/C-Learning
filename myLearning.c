#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main()
{
    printf("Testing \n");
    char* s = "hello world";
    char* t = s;
    printf("%s \n",s);
    printf("%s \n",t);

    // printf("%c \n",t[0]);
    char ch = toupper(t[0]);
    printf("%c \n",ch);
    printf("%s \n",t);
    // t[0] = ch;
    printf("%s \n",t);
    // printf("%c \n",t[0]);
    // // t[0] = toupper(t[0]);
    // // printf("%c \n",t[0]);
    printf("%s: \n",*s);
}