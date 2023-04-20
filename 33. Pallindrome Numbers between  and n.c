#include <stdio.h>
#include <stdbool.h>
bool pali(int n){
    int x= 0; int t= n;
    while(n!=0){
        int r= n%10;
        x= (x*10)+r;
        n= n/10; 
    }
    if(x==t) {return true;}
    else {return false;}
}
void main(){
    int n, c;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("All the pallindrome numbers between 1 and %d are:\n", n);
    for(int i=1; i<n; i++){
        if(pali(i)== true) {printf("%d\n", i);}
    }
}