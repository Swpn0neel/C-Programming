#include<stdio.h>
#include<string.h>
typedef struct empDetail{
    int id;
    char name[100];
    char deperment[100];
    float salary;
}ed;
int main(){
    ed empy[10];
    for(int i = 0; i<10; i++){
    printf("Enter info for Employee %d\n",i+1);
    printf("Enter Employee ID : ");
    scanf("%d", &empy[i].id);
    printf("Enter Employee Name : ");
    scanf("%s", empy[i].name);
    printf("Enter Department : ");
    scanf("%s", empy[i].deperment);
    printf("Enter Salary : ");
    scanf("%f", &empy[i].salary);
    }
    printf("\nAll the employee details are as follows:\n")
    for(int i = 0; i<10; i++){
    printf("ID = %d\n",empy[i].id);
    printf("Name = %s\n",empy[i].name);
    printf("Department : %s\n",empy[i].deperment);
    printf("Salary : %f\n",empy[i].salary);
    printf("\n");
    }
    return 0;
}
