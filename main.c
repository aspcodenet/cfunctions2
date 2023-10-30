#include <stdio.h>

//1. funktioner grunder
//1.5 Liv och död - scope/intro till pekare
//2. deklaration vs definition
//3. flera filer! .h + .c + Makefile
//4. Stefans safeinput - använd!
//    https://github.com/aspcodenet/ccode2
//5. funktionspekare???

void printMenu() {
    printf("1. Skapa\n");
    printf("2. Ändra\n");
    printf("3. Ta bort\n");
    printf("4. Avsluta\n");
}



int getInput(char *prompt, int min, int max){
    int value;
    while(1){
        printf(prompt);
        //mata in ngt
        scanf(" %d", &value);
        if(value >= min && value <=max) 
            break;
    }
    return value;
}


void onefunction(int *i){ // i har nu värdet 1000
    //i = i + 1; // 1001
    *i = *i + 1; // 13
    printf("%d\n", *i);
}




int main(){
    float temp = getTemp();
    int i = 12; // i hamnar på adress 1000 - 1003
    int j = 1;
    printf("%d\n", i);
    onefunction(&i); // adressen till i är ju 1000
    printf("%d\n", i);


    while(1){
        printMenu();
        int value = getInput("Vad vill du göra:",1,4);
        if(value == 4) {
            break;
        }
    }
    // printf("1. Ja\n");
    // printf("2. Nej\n");
    // int value = getInput("Är du säker:",1,2);
    
    return 0;
}


float getTemp(){
    printf("Ange temp:");
    float f;
    scanf(" %f",&f);
    return f;
}
