#include <stdio.h>
void average(int a, int b, int *sum, float *avg){
    *sum= a+b;
    *avg= (float)*sum/2;
}
int main(){
    int a,b,sum;
    float avg;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    average(a,b,&sum,&avg);
    printf("The sum is: %d\n",sum);
    printf("The average is: %f",avg);
}