#include <stdio.h>
void main(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            if(i==j || (6-i)==j) {printf(" %d", i);}
            else {printf("  ");}
        }
        printf("\n");
    }       
}