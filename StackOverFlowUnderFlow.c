#include <stdio.h>
#include <stdbool.h>

bool push(int stack[], int *pointer, int x) {
    if (*pointer >= 10) {
        printf("Stack Overflow\n");
        return false;
    } else {
        stack[*pointer] = x;
        printf("Pushed %d\n", x);
        (*pointer)++;
        return true;
    }
}

bool pop(int stack[], int *pointer) {
    if (*pointer <= 0) {
        printf("Stack Underflow\n");
        return false;
    } else {
        (*pointer)--;
        printf("Popped %d\n", stack[*pointer]);
        stack[*pointer] = 0;
        return true;
    }
}

int main() {
    int stack[10] = {0};
    int pointer = 0;
    int x;
    int choice;

    printf("Do you want to push or pop? 0 for pop, 1 for push: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the value to push: ");
        scanf("%d", &x);
        push(stack, &pointer, x);
    } else {
        pop(stack, &pointer);
    }

    return 0;
}
