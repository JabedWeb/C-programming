#include <stdio.h>
 int max_of_four(int a, int b, int c, int d){
     int max=a;
     if(a>b){
         max=a;
     }
     else if(b>c){
         max=b;
     }
     else if(c>d){
         max=c;
     }
     else{
         max=d;
     }
     return max;
 }
int main(){
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    int ans=max_of_four(a,b,c,d);
    printf("%d",ans);
    return 0;
}