#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count(char* s, char c){
    int out = 0;
    char* t = strchr(s++, c);
    while(t!=NULL){
        out++;
        t = strchr(s+(t-s+1), c);
    }
    return out;
}

int minimumLength(char* s) {
    int out = 0, cnt = 0;
    for(char i = 'a'; i <= 'z'; i++){
        cnt = count(s, i);
        if(cnt > 0 && cnt%2==0) out +=2;
        else if(cnt > 0) out++;
    }
    return out;
}

int main(void){
    printf("%d\n", minimumLength("aa"));
    return 0;
}