#include <stdio.h>
int main(){
    int a[100],i,n;
    printf("how many numbers you choose: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // 20,30,4,50
    int max=a[0];
    for(i=1; i<n; i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("%d",max);
    return 0;
}