#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int c1 = 0, c2 = 0, len = nums1Size+nums2Size, c1f = 0, c2f = 0;
    int* t = malloc(sizeof(int)*len);
    double out = 0;
    if(nums1Size&&nums2Size){
        for(int i = 0; i < len; i++){
            if(!c1f && nums1[c1]<=nums2[c2] || c2f){
                t[i] = nums1[c1];
                c1++;
                if(c1==nums1Size){
                    c1 = 0;
                    c1f = 1;
                }
            }
            else if(!c2f && nums1[c1]>nums2[c2] || c1f){
                t[i] = nums2[c2];
                c2++;
                if(c2==nums2Size){
                    c2 = 0;
                    c2f = 1;
                }
            }
        }
    }
    else if(!nums1Size){
        memcpy(t, nums2, nums2Size*sizeof(int));
    }
    else if(!nums2Size){
        memcpy(t, nums1, nums1Size*sizeof(int));
    }
    
    if((len)%2==0){
        out = ((double)t[len/2]+(double)t[len/2-1])/2.0;
    }
    else{
        out = t[len/2];
    }
    free(t);
    return out;
}

int main(void){
    int a[2] = {1,2}, b[1] = {1};
    printf("%f\n", findMedianSortedArrays(a, 0, b, 1));
    return 0;
}