#include <stdio.h>

int busyStudent(int* startTime, int startTimeSize, int* endTime, int endTimeSize, int queryTime) {
    int out = 0;
    for(int i = 0; i < startTimeSize; i++){
        if(startTime[i] <= queryTime && queryTime <= endTime[i])
            out++;
    }
    return out;
}

int main(void){
    int s[3] = {1,2,3}, e[3] = {3,2,7};
    printf("%d\n", busyStudent(s, 3, e, 3, 4));
}