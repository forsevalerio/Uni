#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[3] = {1,2,3};
    printf("%d \n", arr[0]);
    printf("%d", *(2+arr));
    return 0; 
}
