
#include <stdio.h>
#include<string.h>
int main() {
    char str[100],pat[100];
    int len_str,len_pat,i;
    printf("Enter the string:\n");
    gets(str);
    printf("Enter pattern :\n");
    gets(pat);
    len_str=strlen(str);
    len_pat=strlen(pat);
    for(i=0;i<len_str-len_pat;i++){
        int j=0;
        for(j=0;j<len_pat;j++){
            if(str[i+j]!=pat[j]){
                break;
            }
        }
        if(j==len_pat){
            printf("The pattern found at %d",i);
        }
    }
    
    return 0;
}
 
 

