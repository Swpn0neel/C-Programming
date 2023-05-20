#include <stdio.h>
int strcomapare(char *a, char *b){
    int flag=0;
    while(*a!='\0' && *b!='\0'){
        if(*a!=*b) flag=1;
        a++; b++;
    }
    if(flag==0) return 0;
    else return 1;
}
void main(){
    char s1[100],s2[100];
    printf("Enter 1st string: ");
    scanf("%s", s1);
    printf("Enter 2nd string: ");
    scanf("%s", s2);
    int strc= strcomapare(s1, s2);
    if(strc==0) printf("The strings are equal.\n");
    else printf("The strings are not equal.\n");
}