#include <stdio.h>

int main(){
    int a = 1;
    int *ptr = &a;

    printf("%d\n", a);
    printf("%p\n", &a);
    printf("%p\n", ptr);
    printf("%d\n", *ptr);

    a = 2;
    printf("%d\n", *ptr);

    *ptr = 3;
    printf("%d\n", *ptr);
}