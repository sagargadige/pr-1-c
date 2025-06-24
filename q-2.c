#include<stdio.h>
int main(){
    int HRA,DA,TA,BS;
    printf("Enter basic salary:");
    scanf("%d",&BS);
    HRA=BS*0.1;
    DA=BS*0.05;
    TA=BS*0.08;
    printf("Gross salary is:%d",HRA+DA+TA+BS);
    return 0;
}