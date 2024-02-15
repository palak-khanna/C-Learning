#include <stdio.h>
#include <string.h>

void arrayAndMemory(){
    int scores[3];
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;

    for (int i = 0; i < 3; i++){
        printf("the value at index %d is %d stored at memory loaction %x\n",i,scores[i],&scores[i]);
    }
}

int main1(void)
{
    int list[3] = {1,2,3};
    for(int i=0; i<3; i++){
        printf("%i\n",i);
    }
}

void oneWayOfusingChar(void){
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%i %i %i\n",c1,c2,c3);
}

void secondWayOfusingChar(void){
    char s[] = "HI!";
    char strArr[] = {'H','I','!'};

    printf("%s\n",s);

    int length = strlen(s);
    
    printf("length of string is %d\n",length);

    for(int i=0; i<3; i++){
        printf("the char at index %d is %c\n",i,strArr[i]);
    }

    for(int i=0; i<length; i++){
        printf("the char at index %d is %c\n",i,s[i]);
    }
}
void main(){
    oneWayOfusingChar();
    // secondWayOfusingChar();
}