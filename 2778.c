#include <stdio.h>

int sumOfSquares(int* nums, int numsSize) {
    int out = 0;
    for(int i = 0; i < numsSize; i++){
        if(numsSize%(i+1)==0) out += nums[i]*nums[i];
    }
    return out;
}

int main(void){
    int x[6] = {2,7,1,19,18,3};
    printf("%d\n", sumOfSquares(x, 6));
    return 0;
}