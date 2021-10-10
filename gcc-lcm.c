#include <stdio.h>
int main(){
    int a,b,rem,d,e,gcc,lcm;
    scanf("%d %d",&a,&b);
    d=a;
    e=b;
    while(e!=0){
        rem=d%e;
        d=e;
        e=rem;
    }
    gcc=d;
    lcm=(a*b)/gcc;
    printf("gcc is %d\n",gcc);
    printf("lcm is %d",lcm);
    return 0;
}