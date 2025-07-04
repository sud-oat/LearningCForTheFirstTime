#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtEnd(struct Node** head, int value) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }

    printf("Inserted %d\n", value);
}

void deleteFromEnd(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }

    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
    } else {
        struct Node* temp = *head;
        while (temp->next->next != NULL)
            temp = temp->next;
        free(temp->next);
        temp->next = NULL;
    }

    printf("Deleted from end\n");
}

void printList(struct Node* head) {
    printf("List: ");
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int choice, x;

    while (1) {
        printf("\n0 to insert, 1 to delete, 2 to print, 3 to quit: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Enter value: ");
            scanf("%d", &x);
            insertAtEnd(&head, x);
        } else if (choice == 1) {
            deleteFromEnd(&head);
        } else if (choice == 2) {
            printList(head);
        } else {
            break;
        }
    }

    return 0;
}
