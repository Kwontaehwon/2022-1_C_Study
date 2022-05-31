#include <stdio.h>

int main(){
    char a[4] = "asd";
    int length = 0;
    for(int i = 0 ; a[i] != '\0'  ; i++){
        length++;
    }
    printf("%d", length);
}