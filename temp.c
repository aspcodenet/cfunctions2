#include <stdio.h>

float getTemp(){
    printf("Ange temp:");
    float f;
    scanf(" %f",&f);
    return f;
}

void onefunction(int *i){ // i har nu värdet 1000
    //i = i + 1; // 1001
    *i = *i + 1; // 13
    printf("%d\n", *i);
}
