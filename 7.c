#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#include <string.h>

#define STR_MAX "2147483647" 
#define STR_MIN "2147483648"

int reverse(int x){
    int sign = 1, out = 0, i;
    char num[11];

    if(x==INT_MAX || x==INT_MIN) return 0;

    if(x < 0) {
        sign = -1;
        x = abs(x);
    }
    for(i = 9; i >=0; i--){
        if((((int)(x/pow(10, i)))%10)!=0) break;
        num[9-i] = (char)(((int)(x/pow(10, i)))%10)+'0';
    }

    for(int j = 9-i; j<10; j++){
        num[j] = (char)(((int)(x/pow(10, j-(9-i))))%10)+'0';
    }
    num[10] = '\0';

    if(strcmp(num, sign==1?STR_MAX:STR_MIN)>0) return 0;

    return sign * atoi(num);
}

int main(void){
    printf("%d\n", reverse(123));
    return 0;
}