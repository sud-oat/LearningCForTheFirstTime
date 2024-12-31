#include <stdio.h>

int main() {
  int i;
  int toSort[] = {4, 6, 1, 3, 10, 15, 21, 500, 53, 29};
  int len = sizeof(toSort)/sizeof(toSort[0]);
  for (i = 0; i<len; i++) { 
  	int j;
    int temp;
    j = i;
    while (j>0 && toSort[j-1]>toSort[j]){
    	temp = toSort[j-1];
        toSort[j-1] = toSort[j];
        toSort[j] = temp;
        j--;
    }
  }
  int k;
  for (k=0; k<len; k++){
  	printf("%d\n", toSort[k]);
  }
  return 0;
}
