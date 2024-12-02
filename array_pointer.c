#define N 10
#include <stdio.h>

int main(){
    int array[N] = {1,2,3,4,5,6,7,8,9,10};
    int *h = &array[0];
    for (h; h < &array[10]; h++){
        printf("%d \n", *h);
    }
    return 0;
}
