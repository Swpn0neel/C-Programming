#include <stdio.h>
void main(){
    printf("All the even numbers between 1 and 100 are: \n");
    for(int i=1; i<=100; i++){
        if(i%2==0){
            printf("%d \n",i);
        }
    }
}