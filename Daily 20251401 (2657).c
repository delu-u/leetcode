#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findThePrefixCommonArray(int* A, int ASize, int* B, int BSize, int* returnSize) {
    *returnSize = ASize;
    int* out = malloc(*returnSize*sizeof(int));
    int sum;
    for(int i = 0; i < *returnSize; i++){
        sum = 0;
        for(int j = 0; j <= i; j++)
            for(int k = 0; k <= i; k++)
                if(A[j]==B[k])
                    sum++;
        out[i] = sum;
    }
    return out;

}

int main(void){
    int a[3] = {2,3,1}, b[3] = {3,1,2}, * c, d;
    c = findThePrefixCommonArray(a, 3, b, 3, &d);
    for(int i = 0; i < d; i++){
        printf("%d ", c[i]);
    }
    printf("\n");
    free(c);
    return 0;
}