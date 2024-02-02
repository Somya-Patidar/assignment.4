#include <stdio.h>
int main(){
    int n;
    printf("enter the day number:");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("the day is Monday");
        break;
    case 2:
        printf("the day is Tuesday");
        break;
    case 3:
        printf("the day is Wednesday");
        break;
    case 4:
        printf("the day is Thrusday ");
        break;
    case 5:
        printf("the day is Friday");
        break;
    case 6:
        printf("the day is Saturday");
        break;
    case 7:
        printf("the day is Sunday");
        break;
    
    default:
        printf("invalid");
        break;
    }
}