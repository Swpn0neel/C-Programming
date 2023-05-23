#include <stdio.h>
#include <string.h>
void main(){
    char s[200];
    int x = 0, i;
    printf("Enter the string:\n");
    scanf("%[^\n]s", s);
    for (i = 0;i<200;i++){
        if (s[i]=='\0')x=i;
    }
    printf("The characters of the string in reverse order are:\n");
    for(int i=x-1; i>=0; i--){
        printf("%c\n",s[i]);
    }
}