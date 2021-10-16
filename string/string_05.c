#include <stdio.h>
int main(){
    int i,lenth=100;
  char country[100]={'B','a','n','G','l','a','d','e','s','h'};
  printf("%s\n",country);
  //A=65
  //a=97
// a to A = A + latter-a= 65+97-97
//A TO a=65+32 B to b=



   for(i=0;i<lenth;i++){
       if(country[i]>=65 && country[i]<=90){
        //    country[i]=country[i]+32;
           country[i]='a'+(country[i]-'A');
       }
   }
   printf("%s",country);
   return 0;

   //input BanGldesh
   //output bangladesh
}