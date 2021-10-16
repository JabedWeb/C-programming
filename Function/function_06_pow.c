#include <stdio.h>
void exp_power (int a,int b){
    int i,cal=1;
    for(i=1;i<=b;i++){
    cal=cal*a;
    }
    printf("the result is %d",cal);
}
int main(){
    int base,exp;
    printf("give me base number :");
    scanf("%d",&base);
    printf("give me exp Number :");
    scanf("%d",&exp);
    exp_power(base,exp);
}