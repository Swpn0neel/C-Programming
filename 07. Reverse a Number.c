#include <stdio.h>
void main(){
    int n, d, r=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0){
        d=n%10;
        n=n/10;
        r=r*10+d;
    }
    printf("The reversed number is: %d \n", r);
}