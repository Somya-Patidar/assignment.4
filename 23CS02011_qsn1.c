#include <stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    switch (n%2)
    {
    case 0:
        printf("number is even");
        break;
    case 1:
        printf("number is odd");
        break;
    
    default:
    printf("invalid number");
        break;
    }
}