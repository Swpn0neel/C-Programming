#include <stdio.h>
void main(){
    int n, d;
    int f[10]= {0};
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0){
        d= n%10;
        n= n/10;
        f[d]++;
    }
    printf("The frequency of the digits in the number are as follows:\n");
    for(int i=0; i<=9; i++){
        if(f[i]!=0){
            printf("%d appears %d times.\n", i, f[i]);
        }
    }
}