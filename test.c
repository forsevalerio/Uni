#include <stdio.h>
#include <string.h>

int main(){

    char nomec[20];
    int eta;
    printf("\nCome ti chiami pasticcino alla crema?\n");
    fgets(nomec, 20, stdin);
    nomec[strlen(nomec)-1] = '\0';//rimuovere il \n che fgets mette alla fine
    printf("\nQuanti anni hai?\n");
    scanf("%d", &eta);
    printf("Ciao %s, hai %d anni!\n", nomec, eta);

    return 0;
}