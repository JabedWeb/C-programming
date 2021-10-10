#include <stdio.h>
int main(){
    int a,b,t,gcd;
    scanf("%d %d",&a,&b);
    if(a==0) gcd=a;
    else if(b==0) gcd=b;
    // it doesnt make any sens !
    //a=12  ,b=16 
    // a=16
    //b=12
    // it gives me same result . but why??
    else{
        while (b!=0){
            b=a%b;
            a=b;
        }
        // while (b!=0){
        //     t=b;
        //     b=a%b;
        //     a=t;
        // }
        gcd=a;
    }
    printf("GCD is %d\n",gcd);
    printf("a is %d\n",a);
    printf("b is %d\n",b);
    return 0 ;
}