#include <stdio.h>
void showarray (int a[]){
    int i;
    for (i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
}
int main(){
    int ara[5]={1,3,5,7,9};
    int ara2[5]={3,3,5,7,3};
    showarray(ara);
    showarray(ara2);
}