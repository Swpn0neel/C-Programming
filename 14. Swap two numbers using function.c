#include <stdio.h>
int swap(int a, int b){
    int c= a;
    a= b;
    b= c;
    printf("The numbers after swapping is: \n%d\n%d\n", a, b);
}
void main(){
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);
    swap(a ,b);
}