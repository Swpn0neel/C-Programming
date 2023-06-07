#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int *) malloc(5 * sizeof(int));
    ptr[0]= 1;
    ptr[1] = 45;
    ptr[2] = 12;
    ptr[3] = 78;
    ptr[4] = 46;
    for(int i =0; i<5; i++){
    printf("%d\n",ptr[i]);
    }
}