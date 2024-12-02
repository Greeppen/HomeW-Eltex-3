#include <stdio.h>
#define N 10
#define M 5

int main(){
    char *h = NULL;
    int l = 0;
    char array[N];
    char arr[M];
    printf("Enter your Text: ");
    for (int i = 0; i<N; i++){
        scanf(" %c", &array[i]);
    }
    printf("\n");
    printf("Enter your search Text: ");
    for (int j = 0; j<M; j++){
        scanf(" %c", &arr[j]);
    }
    
    for (int i = 0; i<=N - M; i++){
        l = 0;
        for (int j=0;j<M+i;j++){
            if (arr[j]==array[i+j]){
                l++;
            }
            else{
                break;
            }
        }
        if (l == M){
            h = &array[i];
            break;
        }
    }

    
    if (h!=NULL){
        printf("Your address first input: %p \n", (void*)h);
    }
    else{
        printf("%p \n", (void*)h);
    }
    return 0;
}

