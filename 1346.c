#include <stdio.h>
#include <stdbool.h>

bool checkIfExist(int* arr, int arrSize) {
    for(int i = 0; i < arrSize; i++){
        for(int j = 0; j < arrSize; j++){
            if(i != j && arr[i] == 2*arr[j]) return true;
        }
    }
    return false;
}

int main(void){
    int t[4] = {3,1,7,11};
    printf("%d\n", checkIfExist(t, 4));
    return 0;
}