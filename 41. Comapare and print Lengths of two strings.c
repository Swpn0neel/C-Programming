#include <stdio.h>
#include <string.h>
void main(){
    char s1[1000], s2[1000];
    printf("Enter the 1st string: ");
    scanf("%s", s1);
    printf("Enter the 2nd string: ");
    scanf("%s", s2);
    int a = strcmp(s1,s2);
    if(a!=0) printf("The strings are not same.\n");
    else printf("Both the strings are same.\n");
    int p= strlen(s1);
    int q= strlen(s2);
    if(p==q) printf("Length of both the strings is: %d\n", p);
    else{
        printf("Length of 1st string is: %d\n", p);
        printf("Length of 2nd string is: %d\n", q);
    }
}