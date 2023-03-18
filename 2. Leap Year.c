#include <stdio.h>
void main(){
    int n;
    printf("Which year? ");
    scanf("%d",&n);
    if(n%400==0){
        printf("It's a leap year. \n");
    }
    else if(n%100==0){
        printf("It's not a leap year. \n");
    }
    else if(n%4==0){
        printf("It's a leap year. \n");
    }
    else{
        printf("It's not a leap year. \n");
    }
}