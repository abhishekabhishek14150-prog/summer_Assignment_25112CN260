#include<stdio.h>
int main(){
    int num,rem,prod=1;
    printf("enter the number :");
    scanf("%d",&num);
    while(num>0){
        rem=num%10;
        prod=prod*rem;
        num=num/10;
        printf("product is %d",prod);
    } 
    return 0;
}
