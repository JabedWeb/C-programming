#include <stdio.h>
int main(){
    int ara[10]={10,20,30,40,50,60,70,80,90,100};
    int i,j,rev;
    for(i=0,j=9;i<10;i++,j--){
    rev=ara[j];
    ara[i]=rev;
    ara[j]=ara[i];
    }
    for (i=0;i<10;i++){
       printf("%d this elements is = %d\n",i+1,ara[i]);
   }
}