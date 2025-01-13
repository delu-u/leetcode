#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int carry = 1, carryLen = 1, *out;
    for(int i = digitsSize-1; i >= 0; i--){
        if(digits[i]+carry==10){
            carryLen++;
        }
        else {
            carry = 0;
            break;
        }
    }
    *returnSize = digitsSize+carry;
    out = malloc(*returnSize*sizeof(int));
    if(*returnSize > digitsSize) out[0] = 1;
    for(int i = carry; i < *returnSize; i++){
        if(i>(*returnSize-carryLen-1)) out[i] = (digits[i-carry]+1)%10;
        else out[i] = digits[i];
    }
    return out;
}

int main(void){
    int size, *out, a[1] = {9};
    out = plusOne(a, 1, &size);
    for(int i = 0; i < size; i++){
        printf("%d ",  out[i]);
    }
    printf("\n");
    free(out);
    return 1;
}