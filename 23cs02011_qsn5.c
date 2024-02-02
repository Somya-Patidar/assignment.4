#include <stdio.h>
#include <math.h>
int main(){
    int n;
    int original;
    printf("enter the number:");
    scanf("%d",&n);
    original=n;
    int sum=0;
    int digit=0;
    // while (n>0)
    // {
    //     digit++;
    //     n=n/10;
    // }
    // if(digit<3){
    //     printf("invalid input");
    //     return -1;
    // }
    
    
    while(n>0){
        int rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
        digit++;
    }
    if(digit<3){
        printf("incorrect input");
    }
    else if(sum==original){
        printf("\nyes");
    }
    else{
        printf("\nno");
    }
    return 0;
    
}