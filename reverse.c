#include <stdio.h>
#include<string.h>
int main() {
    char str[50];
    char *start;
    char *end;
    char temp;
    printf("Enter a string:\n");
    gets(str);
    start=str;
    end=str+strlen(str)-1;
    while(start<end){
       temp=*start;
       *start=*end;
       *end=temp;
        start++;
        end--;
    }
    printf("Reverse of a string is %s",str);
    return 0;
}
