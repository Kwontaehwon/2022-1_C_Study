#include <stdio.h>

int main(){
    int apple_price = 5000;
    int count;

    scanf("%d", &count);

    printf("apple price : %d count : %d \n", apple_price, count);
    printf("total price : %d \n", apple_price * count);
}