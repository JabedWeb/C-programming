#include <stdio.h>
int main(){
    int i,lenth=100;
  char country[100]={'B','a','n','g','l','a','d','e','s','h'};
  printf("%s\n",country);
   for(i=0;i<lenth;i++){
       if(country[i]>=97 && country[i]<=122){
           country[i]='A'+(country[i]-'a');
        //    country[i]=country[i]-32;
       }
   }
   printf("%s",country);
   return 0;
   //input Bangldesh
   //output BANGLADESH
}