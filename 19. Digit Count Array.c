#include<stdio.h>
int no(int n){
    int k=0;
    while(n!=0){
        n=n/10;
        k++;
    }
    return k;
}
void main(){
    int n,x,y,z,t=1;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    int a[n], b[6];
    for(int i=0; i<n; i++){
        printf("Enter array number: ");
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        if(no(a[i])==1){x++;}
        if(no(a[i])==2){y++;}
        if(no(a[i])==3){z++;}
    }
    printf("Required Array is: \n");
    for(int i=0; i<6; i++){
        if(i%2==0){b[i]=t;t++;}
        else if(i==1){b[1]=x;}
        else if(i==3){b[3]=y;}
        else if(i==5){b[5]=z;}
        printf("%d\n", b[i]);
    }
}