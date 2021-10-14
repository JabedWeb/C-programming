#include <stdio.h>
int max_number (int ara[6]){
    int i;
    int max =ara[0];
    for (i=1;i<6;i++){
        if(ara[i]>max){
            max=ara[i];
        }
    }
    return max;
}

int main(){
    int ara[6]={100,20,40,30,50,60};
    int max=max_number(ara);
    printf(" this big number is %d",max);
}