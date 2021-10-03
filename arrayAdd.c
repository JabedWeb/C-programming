#include <stdio.h>
int main(){
    int a[4],i,sum;
    sum=0;
    a[0]=50;
    a[1]=20;
    a[2]=30;
    a[3]=40;
    for(i=0;i<=3;i++){
        printf("%d\n",a[i]);
        sum=sum+a[i];
    // printf("%d\n",sum);
    }
    printf("%d\n",sum);
    return 0;    
}