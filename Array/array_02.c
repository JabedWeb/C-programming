#include <stdio.h>
int main (){
   int ara[10]={10,20,30,40,50,60,70,80,90,100};
   int ara2[10];
   int i,j;
   
   for (i=0;i<10;i++){
       printf("%d th element is=%d\n",i+1,ara[i]);
   }
   // elemenet number transfer ara[0]=10 to ara2[9]=10
    for (i=0,j=9;i<10;i++,j--){
       ara2[j]=ara[i];
   }
   // elemenet number transfer ara2[0]=100 to ara[0]=100 
   for (i=0;i<10;i++){
       ara[i]=ara2[i];
   }
      // elemenet number print ara[0]=100
   for (i=0;i<10;i++){
       printf("%d this elements is = %d\n",i+1,ara[i]);
   }
 
    return 0;
}