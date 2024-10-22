#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void incognita(){
    char* parola = (char*)malloc(0xFF);
    printf("Inserire la parola: \n");
    scanf("%s", parola);
    int size = sizeof(parola)/sizeof(*(parola));
    char incognita[size];
    for(int i = 0; i < size; i++){
        *(incognita + i) = '_';
    }
    printf("La parola e': \n");
    printf("%s", incognita);
}

int main(){
    
    int indo = 1;
    int tentativi;
    incognita();
    /*while(indo = 1){

    }

*/
    return 0;
}