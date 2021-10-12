#include <stdio.h>
int sqare (int a){
    return a*a;
}
int main(){
    int num,sqare_Number;
    printf("please an integer Number : ");
    scanf("%d",&num);
    sqare_Number=sqare(num);
    printf(" the sqare number is %d",sqare_Number);
}

