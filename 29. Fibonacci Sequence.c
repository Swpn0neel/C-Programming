#include <stdio.h>
void main(){
    int n, a=0, b=1;
    printf("Enter the range: ");
    scanf("%d", &n);
    printf("The Fibonacci sequence is:\n");
    for(int i=1; i<=n; i++){
        if(i==1){printf("%d ",a);}
        else if(i==2){printf("%d ",b);}
        else{
            printf("%d ",(a+b));
            int c=b;
            b= a+b;
            a= c;
        }
    }
}