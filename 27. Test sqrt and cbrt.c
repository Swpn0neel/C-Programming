#include <stdio.h>
#include <math.h>
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if((j*j)==i){
                for(int k=1; k<=n; k++){
                    if((k*k*k)==i){
                        printf("%d\n", i);
                    }
                }
            }
        }
    }
}