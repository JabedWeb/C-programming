// Write a C program to accept two integers and check whether they are equal or not.
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a==b){
        printf("its equal a=%d,b=%d",a,b);
    }
     else if(a!=b){
        printf("its not equal to a=%d,b=%d",a,b);
    }
    return 0;  
}