#include <stdio.h>
#include <stdbool.h>


bool enqueue(int queue[], int *head, int *tail, int x) {
    int next_tail = (*tail + 1) % SIZE;
    if (next_tail == *head) {
        printf("Queue Overflow\n");
        return false;
    } else {
        queue[*tail] = x;
        *tail = next_tail;
        printf("Queued %d\n", x);
        return true;
    }
}

bool dequeue(int queue[], int *head, int tail) {
    if (*head == tail) {
        printf("Queue Underflow\n");
        return false;
    } else {
        printf("Dequeued %d\n", queue[*head]);
        queue[*head] = 0;
        *head = (*head + 1) % SIZE;
        return true;
    }
}

void printQueue(int queue[], int head, int tail) {
    printf("Queue: ");
    if (head == tail) {
        printf("empty\n");
        return;
    }

    int i = head;
    while (i != tail) {
        printf("%d ", queue[i]);
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int main() {
    int queue[SIZE] = {0};
    int head = 0;
    int tail = 0;
    int choice, x;

    while (1) {
        printf("\nChoose operation: 0 for enqueue, 1 for dequeue, 2 to quit: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Enter the value to enqueue: ");
            scanf("%d", &x);
            enqueue(queue, &head, &tail, x);
        } else if (choice == 1) {
            dequeue(queue, &head, tail);
        } else if (choice == 2) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid input.\n");
        }

        printQueue(queue, head, tail);
    }

    return 0;
}
