#include <stdio.h>
void main(){
    int n,m;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("By how much you want to left-shift? ");
    scanf("%d",&m);
    int a = n << m;
    printf("Number after left-shifting it by %d = %d \n", m, a);
}