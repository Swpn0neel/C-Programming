#include <stdio.h>
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        printf("Enter another number: ");
        scanf("%d",&n);
    }
    while(n<=0){
        printf("\n");
        break;
    }
}