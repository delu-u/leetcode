#include <stdio.h>
#include <math.h>

int mySqrt(int x) {
    if(x==0) return 0;
    double acc = 10e-8, s = x;
    while((s - (x/s))>acc){
        s = (s + (x/s))/2;
    }
    return floor(s);
}

int main(void){
    printf("%d\n", mySqrt(4));
    return 0;
}