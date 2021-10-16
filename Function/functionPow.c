#include <stdio.h>
void powerfaunction(double base,double exp){
    double result=1,i;
    for(i=1;i<=exp;i++){
    result=result*base;
    }
    printf("%lf",result);
}

int main(){
    double base,exp;
    scanf("%lf",&base);
    scanf("%lf",&exp);
    powerfaunction(base,exp);
}