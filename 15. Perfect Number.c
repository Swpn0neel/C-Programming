#include <stdio.h>
void main(){
    int n, s=0;
    printf("Enter a number: \n");
    scanf("%d",&n);
    for(int i=1 ; i<n; i++){
        if(n%i==0){s= s+i;}
    }
    if(n!=1 && n==s){printf("It's a perfect number.\n");}
    else{printf("It's not a perfect number.\n");}
}