#include <stdio.h>

int push(stack, pointer, x){
  if (pointer >= 10){
  	printf("Stack Overflow");
    return false;
  }else {
  	printf("Pushed");
    stack[pointer] = x;
    pointer +=1;
    return true;
  }
}
int pop (stack, pointer){
  if (pointer <=0){
  	printf("Stack Underflow");
	return false;
  }else {
  	printf("Popped");
    stack[pointer] = 0;
    pointer -= 1;
    return true;
}

int main() {
  int stack[10];
  int pointer;
  int x;
  printf("Do you want to push or pop? 0 for pop 1 for push");
  int choice;
  scanf("$d", &choice);
  if (choice == 0){
  	printf("Enter the value to push");
    scanf("%d", &x);
  	push(stack, pointer, x);
  } else {
  	pop(stack, pointer);
  return 0;
}
