#include <stdio.h>
void prime(int *n){
    int c=0;
    for(int i=1; i<=*n; i++){
        if(*n%i==0){c++;}
    }
    if(c==2){printf("%d ", *n);}
}
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("All the prime numbers between 1 and %d are:\n", n);
    for(int i=1; i<=n; i++){
        prime(&i);
    }
}