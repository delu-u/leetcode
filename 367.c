#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

bool isPerfectSquare(int num) {
    for(int i = 1; i <= 46340; i++){
        if(i*i==num) return true;
        else if(i*i>num) return false;
    }
    return false;
}

int main(void){
    printf("%d\n", isPerfectSquare(16));
    return 0;
}