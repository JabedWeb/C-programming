#include <stdio.h>
int total_lenth(char country[]){
  int i=0;
  while(country[i]!='\0'){
      i++;
  }
  return i;
}
int main(){
    int i;
    char country[100];
    scanf("%s",country);
    int result=total_lenth(country);
    printf("%d",result);
}