#include <stdio.h>
void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The Prime Factors of %d are:\n", n);
    for(int i=1; i<n; i++){
        if(n%i==0){
            int c=0;
            for(int j=1; j<=i; j++) {if(i%j==0){c++;}}
            if(c==2) {printf("%d\n", i);}
        }
    }
}