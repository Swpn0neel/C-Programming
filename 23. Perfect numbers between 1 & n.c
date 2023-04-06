#include <stdio.h>
void main(){
    int n, s;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("All the perfect numbers between 1 and %d are:\n", n);
    for(int i=1 ; i<=n; i++){
        s= 0;
        for(int j=1 ; j<i; j++){
            if(i%j==0){s= s+j;}
        }
        if(i!=1 && i==s){printf("%d\n", i);}
    }
}