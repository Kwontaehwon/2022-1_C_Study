#include <stdio.h>

int main(){

    int human;
    float weight, totalweight;

    human = 2;
    weight = 60.25;
    totalweight = human * weight;

    printf("human : %d, weight : %f \n", human, weight);
    printf("total weight : %f \n", totalweight);

    return 0;
}