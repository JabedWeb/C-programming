#include <stdio.h>
int add (int a,int b){
    int c=b;

    return a+b+c ;
}
int main (){
    int a,b,sum;
    printf("give two number :");
    scanf("%d %d",&a,&b);
    // if I give one value add fuction then i have to give one value add function parameters
    // if I give two value add fuction then i have to give two value add function parameters
    sum=add(a,b);
    printf("the sum is two number : %d",sum);
    //input 5,6
    //output 17
}
