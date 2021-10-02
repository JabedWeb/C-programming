#include<stdio.h>
int main(){
    int i ,n;
    for(i=1;i<=20;i++){
        for(n=1;n<=10;n++){
            printf("%d X %d = %d\n",i,n,i*n);
        }
        printf("\n");
        printf("\n");
    }
return 0;    
}