#include <stdio.h>



void inssorting(int A[], int n){
   int i, key, j;
   for(i = 1; i < n; i++){
    key = A[i]; //prendo l'elemento da ispezionare
    j = i-1; //la posizione dell'elemento che precede A[i]

    while(j >= 0 && A[j] > key){ //while loop in cui l'elemento in ispezione deve essere minore
                                 //del precedente fino a che l'indice non si annulla
        A[j+1] = A[j];           //Se la condizione è verificata scambia il precedente con l'ispezionato
        j -= 1;                  //sposta l'indice all'elemento precedente ai due e così via
    }
    A[j+1] = key; //se non si entra nel ciclo while l'elemento rimane lì

   } 
}

void insprinting(int A[], int n){
    printf("[ ");
    for(int i = 0; i < n; i++){
        printf("%d ", A[i]);
    }
    printf("]");
}

int main(){
    int A[6] = {12, 5, 7, 8 , 3, 2};
    int size = sizeof(A)/sizeof(A[0]);
    inssorting(A, size);
    insprinting(A, size);
    return 0;
}
