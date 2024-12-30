#include <stdio.h>

int main() {
  int temp;
  int i;
  int j;
  int k;
  int flag;
  int toSort[] = {5, 7, 3, 9, 2, 29, 66, 23, 74, 100, 28, 77};
  int len = sizeof(toSort)/sizeof(toSort[0]);
  for (i=0; i<len; i++) {
  	flag = 0;
  	for (j=0; j<len; j++) {
    	if (toSort[j] > toSort[j+1]) {
        	temp = toSort[j];
            toSort[j] = toSort[j+1];
            toSort[j+1] = temp;
            flag = 1;
        }
    }
    len = len--;    
    if (flag == 0) {
    	break;
    }
  }
  int len2 = sizeof(toSort)/sizeof(toSort[0]);
  for (k = 0; k<len2; k++) {
  	printf("%d\n", toSort[k]);
  }
  return 0;
}
