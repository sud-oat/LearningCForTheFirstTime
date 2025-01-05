#include <stdio.h>

void Collatz(){
    printf("Enter a number to test for Collatz Conjecture");
    int seed;
    scanf("%d", &seed);
    while (seed>1){
        if (seed%2 == 0){
            seed = seed/2;
            printf("%d\n", seed);
        } else {
            seed = (3*seed)+1;
            printf("%d\n", seed);
        }
    }
    printf("%d", seed);
}

int main(){
    Collatz();
    return 0;
}
