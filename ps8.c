#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
 int a,sum;
    double c,summmm;
    char cha[100];
    // Print the sum of both integer variables on a new line.
    scanf ("%d",&a);
    sum=i+a;
    printf("%d\n",sum); 
    // Print the sum of the double variables on a new line.
    scanf("%lf",&c);
    summmm=d+c;
    printf("%0.1lf\n", summmm);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    fgets(cha,sizeof(cha), stdin);
    printf("%s %s",s,cha);
    return 0;
}