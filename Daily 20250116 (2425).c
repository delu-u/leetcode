#include <stdio.h>
#include <stdlib.h>

int xorAllNums(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int size = nums1Size*nums2Size;
    int xora = 0, xorb = 0;
    for(int* a = nums1; a < nums1+nums1Size; a++){
        xora ^= *a;
    }
    for(int* b = nums2; b < nums2+nums2Size; b++){
        xorb ^= *b;
    }
    if(nums2Size%2==0)
        xora = 0;
    if(nums1Size%2==0)
        xorb = 0;
    return xora^xorb;
}

int main(void){
    int a[7] = {25,29,3,10,0,15,2}, b[1] = {12};
    printf("%d\n", xorAllNums(a, 7, b, 1));
    return 1;
}