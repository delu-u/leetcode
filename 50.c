#include <stdio.h>
#include <math.h>
#include <limits.h>

double myPow(double x, int n) {
    if(n==0 || x==1) return 1;
    if(x==-1) return n%2?-1:1;
    double out = 1;
    for(unsigned i = 0; i < labs(n); i++){
        out *= x;
        if(out==INFINITY) break;
    }
    if(n>0) return out;
    return 1/out;
}

int main(void){
    printf("%f\n", myPow(2, -2147483648));
    
    printf("%f\n", pow(2, -2147483648));
    return 0;
}