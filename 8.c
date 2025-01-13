#include <stdio.h>
#include <limits.h>
#include <math.h>

int myAtoi(char* s) {
    unsigned long long out = 0;
    int start = 0, end = -1, sign = 1, cnt = 0, i;
    for(i = 0; s[i] !='\0'; i++){
        if(s[i]==' ' && !cnt) continue;
        else if(s[i]=='-' && !cnt) {
            sign = -1;
            cnt = 1;
            start = i+1;
        }
        else if(s[i]=='+' && !cnt) {
            sign = 1;
            cnt = 1;
            start = i+1;
        }
        else if(s[i]>='0' && s[i]<='9' && !cnt){
            cnt = 1;
            start = i;
        }
        else if(!(s[i]>='0' && s[i]<='9')){
            if(cnt) end = i-1;
            cnt = 0;
            break;
        }
    }
    if(i==0) return 0;
    if(cnt) end = i-1;
    for(i = start; i<= end+1; i++){
        if(s[i]!='0') {
            start = i;
            break;
        }
    }
    if(end-start>=10){
        if(sign==-1) return INT_MIN;
        else return INT_MAX;
    }

    for(i = end; i+1>start; i--){
        out += (s[i]-'0')*pow(10, end-i);
    }
    if(sign == 1 && out > INT_MAX && out != 0) return INT_MAX;
    else if(sign == -1 && -out < INT_MIN && out != 0) return INT_MIN;
    return sign*out;
}

int main(void){
    printf("%d\n", myAtoi(" b11228552307"));
    return 0;
}