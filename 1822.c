#include <stdio.h>

int arraySign(int* nums, int numsSize) {
    long prod = 1;
    for(int i = 0; i< numsSize; i++){
        if(nums[i]==0) return 0;
        else if(nums[i]<0) prod *= -1;
    }
    return prod;
}

int main(void){
    int a[7] = {-1,-2,-3,-4,3,2,1};
    printf("%d\n", arraySign(a, 7));
    return 0;
}