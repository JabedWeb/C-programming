#include <stdio.h>
int main() {
	
   int n,sum=0;
scanf("%d", &n);
do {
    sum += (n%10);
    n/=10;
   printf("this is sum %d\n",sum);
   printf("this is number %d\n",n);
}
while (n!=0);  
printf("%d",sum);
return 0;
}