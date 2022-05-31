#include <stdio.h>

void swap(int* a, int* b){
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;

    printf("In Func a : %d , b : %d \n", *a, *b);
}

int main(){
    int a = 22;
    int b = 3;
    printf("Before Swap a : %d , b : %d \n",a, b);
    swap(&a, &b);
    printf("After Swap a : %d , b : %d \n",a, b);


}