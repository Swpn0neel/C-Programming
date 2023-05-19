#include <stdio.h>
int fact(int n){
    if(n==0 || n==1) return 1;
    int f1= fact(n-1);
    int ft= f1*n;
    return ft;
}
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int factorial= fact(n);
    printf("The factorial is: %d\n", factorial);
}