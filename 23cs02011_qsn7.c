#include <stdio.h>
int main(){
    int age,tp;
    printf("enter the age of person: ");
    scanf("%d",&age);
    if(age<5){
        printf("no ticket price for you");
    }
    else if(age>=5 && age<=12){
        printf("your ticket price is %d",20);
    }
    else if(age>=13 && age<=59){
        printf("your ticket price is %d",50);
    }
    else if(age>=13 && age<=59){
        printf("your ticket price is %d",50);
    }
    else{
        printf("Ticket has discount, your ticket cost is 40Rs");
    }
}