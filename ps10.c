#include <stdio.h>
#include <string.h>
int main() {
    int i = 4;
    int a,sum;
    // // Print the sum of both integer variables on a new line.
    // scanf ("%d",&a);
    // sum=i+a;
    // printf("%d\n",sum); 
    // // Print the sum of the double variables on a new line.

    double d = 4.0;
    double c,summmm;
    scanf("%lf",&c);
    summmm=d+c;
    printf("%0.1lf\n", summmm);

    char s[] = "HELLO";
    char cha[150];
    fgets(cha, sizeof(cha), stdin);
    printf("%s %s",s,cha);
    return 0;
}