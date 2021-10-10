#include <stdio.h>
#include <string.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "Hello";
 int a,sum;
    double c,summmm;                

    scanf ("%d",&a);
    sum=i+a;
    printf("%d\n",sum); 
 
    scanf("%lf",&c);
    summmm=d+c;
    printf("%0.1lf\n", summmm);
  
    char cha[150];
    fgets(cha, sizeof(cha), stdin);
    printf("%s %s",s,cha);
    return 0;
}