#include <stdio.h>
int add (int a,int b){
    int c=b;

    return a+b+c ;
}
int main (){
    int a,b,sum;
    printf("give two number :");
    scanf("%d %d",&a,&b);
    sum=add(a,b);
    printf("the sum is two number : %d",sum);
}
