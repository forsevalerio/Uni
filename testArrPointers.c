#include <stdio.h>
#include <stdlib.h>

int main() {
    int *mem, *mammt;
    mem = (int*)malloc(10*sizeof(int));
    mammt = mem;
    free(mem);
    free(mammt);
    char* stringa = (char*)malloc(0xFF); // stessa cosa d char stringa[0xFF]
    stringa = "ciao";

    return 0; 
}
