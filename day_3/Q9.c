#include<stdio.h>
int main(){
    int num, i, flag=0;
    printf("enter the number :");
    scanf("%d",&num);
    if(num<=1){
        printf("number is not prime");
        return 0;
    }
    for(i=2; i<=num/2; i++){
        if(num%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("number is prime");
    }else{
        printf("number is not prime");
    }
}
