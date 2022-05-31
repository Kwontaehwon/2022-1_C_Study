#include <stdio.h>

int main(){
    int i = 10;
    while(i > 0){
        int j = 0;
        while(j < i){
            printf("*");
            j++;
        }
        i--;
        printf("\n");
    }
    return 0;
}