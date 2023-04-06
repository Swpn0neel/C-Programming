#include <stdio.h>
void main(){
    float f;
    printf("Enter the floating point value: ");
    scanf("%f",&f);
    if(f>=0 && f<=30){printf("Number is in the range 0-30");}
    else if(f>30 && f<=50){printf("Number is in the range 30-50");}
    else if(f>50 && f<=80){printf("Number is in the range 50-80");}
    else if(f>80 && f<=100){printf("Number is in the range 80-100");}
    else{printf("Wrong Input");}
}