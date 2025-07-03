#include <stdio.h>
#include <stdbool.h>


bool enqueue(int queue[], int *tail, int x){
  if (*tail >= 10){
  	printf("Queue Overflow");
    return false
  }else{
  	queue[*tail] = x;
    printf("Queued");
    *tail += 1;
    return true;
  }
}
  	
bool dequeue(int queue[], int *head, int tail){
  if (*head == tail){
  	printf("Queue Underflow");
    return false;
  }else{
  	queue[*head] = 0;
    printf("Dequeued");
    *head += 1;
    return true;
  }
}


int main() {
  int queue[10];
  int head = 0;
  int tail = 0;
  int x;
  printf("Do you want to enqueue or dequeue? 0 for enqueue 1 for dequeue");
  int choice;
  scanf("%d", &choice);
  if (choice == 0){
  	printf("Enter the value to push");
    scanf("%d", &x);
  	enqueue(queue, &tail, x);
  } else {
  	dequeue(queue, &head, tail);
  }
  return 0;
}
