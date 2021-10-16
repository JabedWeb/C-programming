#include <stdio.h>
int main(){
    int i[5],n;
    for(n=0; n<=4;n++){
    scanf("%d",&i[n]);
    }
    for(n=0; n<=4;n++){
    printf("the number is %d\n",i[n]);
    }
   return 0;
}