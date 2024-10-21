#include <stdio.h>

int main(){
    int A[] = {5,4,7,3,23,5,7,4,3};
    int min = A[1];
    int temp;
    for(int i = 1; i < sizeof(A)/4; i++){
        while(A[i-1]<A[i]){
            temp = A[i];
            A[i] = A[i-1];
            A[i-1]=A[i];
            //i -= 1;

        }
    }
    arrat(A);
    return 0;
}

int arrat(int a[]){
    for(int j = 0; j < sizeof(a)/4; j++){
        printf("%d", a[j]);
    }
    return 0;
}