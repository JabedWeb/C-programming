#include <stdio.h>
int main(){
    int n,sum=0;
    n=0;
    while(n <=10){
        n=n+1;
        if (n%2==0){
        continue;
        }
        printf("%d\n",n);
        sum=sum+n; 
    }
    printf("%d",div);
    return 0;
}