#include <stdio.h>
int main(){
    char country[100]={'B','a','n','g','l','a','d','e','s','h','\0'};
    char country1[]={'B','a','n','g','l','a','d','e','s','h','\0'};
    char country2[100]={'B','a','n','g','l','\0','d','e','s','h','\0'};
    char country3[100]={'B','a','n','g','l',' ','d','e','s','h','\0'};
    char country4[]="Bangladesh";
    char *country5="Bangladesh";
    printf("%s\n",country);
    printf("%s\n",country1);
    printf("%s\n",country2);
    printf("%s\n",country3);
    printf("%s\n",country4);
        printf("%s\n",country5);
    return 0;
}