#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = n-1 ; i >= 0 ; i--){
        for(int z = 0 ; z < i ; z++){
            printf(" ");
        }
        for(int j = 0; j< (n-i-1) * 2 + 1 ; j++){
            printf("*");
        }
        printf("\n");
    }
}