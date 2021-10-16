#include <stdio.h>
int main(){
    int ara[]={10,20,30,40,50,60,70,80,90,100};
    int ara2[10];
    int i,j;
    for (i=0,j=9;i<10;i++,j--){
        ara2[j]=ara[i];

        // 10{9}    10{1}
        // // printf("this is ara %d\n",ara[i]);
        // printf("this is ara2 %d\n",ara2[j]);

    }
     for (i=0;i<10;i++){
        ara2[i]=ara[i];


    }
    for (i=0;i<10;i++){
        printf("%d\n",ara[i]);
    }

    return 0;
}