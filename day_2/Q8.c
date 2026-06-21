#include<stdio.h>
int main(){
    int num,rem,temp,rev=0;
    printf("enter the number ot check palindrown :");
    scanf("%d",&num);
    temp=num;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(temp==rev){
        printf("number is palindrown");
    }else{
        printf("number is not palindrown");
    }
    return 0;
}
