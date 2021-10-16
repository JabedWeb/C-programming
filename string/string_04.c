#include <stdio.h>
int total_lenth(char country[]){
  int i;
  int lenth=0;
  for(i=0;i<country[i]!='\0';i++){
    lenth++;
  }
  return lenth;
}
int main(){
    int i,lenth;
  char country[100];
    scanf("%s",country);
    int result=total_lenth(country);
    printf("%d",result);
}