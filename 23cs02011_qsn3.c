#include <stdio.h>
int main(){
    float cb,cs;
    printf("enter your current balance:");
    scanf("%f",&cb);
    printf("enter your credit score:");
    scanf("%f",&cs);
    
    if(cs<600){
        printf("the interest is %f",(15*cb)/100);
    }
    else if(cs>=600 && cs<=750){
        printf("the interest is %f",(12*cb)/100);
    }
    else if(cs>750){
        printf("the interest is %f",(10*cb)/100);
    }
    else{
        printf("invalid credit score");
    }
    return 0;
}