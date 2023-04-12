#include <stdio.h>
void main(){
    int n; float s;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The Sum of the Harmonic Series is:\n");
    for(int i=1; i<=n; i++){
        if(i==1){printf("1+ ");}
        else if(i==n){printf("1/%d",i);}
        else{printf("1/%d+ ",i);}      
        s=s+(1/(float)i);
    }
    printf("= %f\n",s);
}