#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int divide(int dividend, int divisor) {
    if(divisor==1) return dividend;
    if(dividend==INT_MIN && divisor==-1) return INT_MAX;
    int sign = (divisor<0 || dividend<0) && !(divisor<0 && dividend<0) ? -1 : 1;
    unsigned out;
    for(out = 0; out*llabs(divisor) <= llabs(dividend); out++);
    return --out*sign;
}

int main(void){
    printf("%d\n", divide(-2147483648, -1));
    return 0;
}