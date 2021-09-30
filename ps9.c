#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char input_string[105]; 
    printf("Hello, World.\n");
    fgets(input_string, sizeof(input_string), stdin);
    printf("%s",input_string);
    return 0;
}