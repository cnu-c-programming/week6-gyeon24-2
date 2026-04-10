#include <stdio.h>

void printf_arr(int* p, int size){
    printf("%zu\n", sizeof(p));
    for(int i=0;i<size;i++) printf("%d ", *(p+i));
    printf("\n");
}
int main() {
    int arr5[5] = {1,2,3,4,5};
    
    printf("%zu\n", sizeof(arr5));
    for(int i=0;i<5;i++) printf("%d ", *(arr5 + i));
    printf("\n");

    printf_arr(arr5, 5);
    
}
