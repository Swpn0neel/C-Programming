#include <stdio.h>
void main(){
    for(int i=1; i<=5; i++){
        for(int j=i; j<=5; j++){
            if(i==1 || j==i || j==5) {printf("%d ", j);}
            else {printf("  ");}
        }
        printf("\n");
    }
}