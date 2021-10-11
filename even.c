#include<stdio.h>
int main(){
    int n;
    n=1;
    while(n<=10){
    n=n+1;
        if(n%2==0){
            continue;
        }
        else if (n >10){
            break;
        }
    printf("%d\n",n);   
    }
    return 0;
    //
}