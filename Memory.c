#include <stdio.h>
#include <ctype.h>
#include <string.h>

// int main1(void){
//     int n=50;
//     int *p=&n;
//     printf("%p\n",p);
// }

typedef char* string;

// int main2(void){
//     string s  = "HI!";
//     printf("%s\n",s);
// }

// int main3(void){
//     int n=50;
//     int *p=&n;
//     printf("%i\n",*p);
// }

// int main4(void){
//     char *s  = "HI!";
//     printf("%p\n",s);
//     printf("%s\n",s);

//     printf("%p\n",&s[0]);
//     printf("%p\n\n",s[0]);

//     printf("%p\n",&s[1]);
//     printf("%p\n\n",s[1]);

//     printf("%p\n",&s[2]);
//     printf("%p\n",&s[3]);
//     printf("%p\n",&s[4]);
// }

// int main5(void){
//     char *s ="HI!";
//     printf("%c\n", *s); // same as s[0] and so on
//     printf("%c\n",*(s+1));
//     printf("%c\n",*(s+45534));
// }
 
void main()
{
    printf("Testing\n");
    char* s = "hello world";
    char* t = s;
    t[0] = toupper(t[0]);
    printf("%c: \n",s);
}