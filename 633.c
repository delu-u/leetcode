#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>

bool judgeSquareSum(int c) {
    double n;
    for(long i = 0; i<= sqrt(c); i++){
        n = sqrt(c - i*i);
        if(floor(n)==n) return true;
    }
    return false;
}

int main(void){
    printf("%d\n", judgeSquareSum(0));
    return 0;
}