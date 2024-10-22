#include <stdio.h>

int main(){
    int myNumbers[4] = {25, 50, 75, 100};
    int size = sizeof(myNumbers)/sizeof(*(myNumbers));
    for(int i = 0; i<size; i++){
        *(myNumbers + i) += 2*i;
        printf("%d ", *(myNumbers + i));
    }
    return 0;
}