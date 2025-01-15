#include <stdio.h>
#include <math.h>

int maxArea(int* height, int heightSize) {
    int max = 0, *start = height, *end = height+heightSize-1;
    while(start!=end){
        if(*start>*end) {
            if(*end*abs(start-end) > max)
                max = *end*abs(start-end);
            end--;
        }
        else {
            if(*start*abs(start-end) > max)
                max = *start*abs(start-end);
            start++;
        }
    }
    return max;
}

int main(void){
    int height[9] = {1,8,6,2,5,4,8,3,7};
    printf("%d\n", maxArea(height, 9));
    return 0;
}