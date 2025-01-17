#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool doesValidArrayExist(int* derived, int derivedSize) {
    int *d, sum = 0;
    for(d = derived; d<derived+derivedSize; d++){
        sum ^= *d;
    }
    if(sum == 0) return true;
    else return false;
}

int main(void){
    int a[3] = {1,1,0};
    printf("%d\n", doesValidArrayExist(a, 3));
    return 0;
}