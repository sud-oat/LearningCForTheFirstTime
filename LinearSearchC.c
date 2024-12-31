#include <stdio.h>

int main() {
  int toSearch[] = {1, 3, 4, 6, 10, 15, 21, 29, 53, 500};
  int len = sizeof(toSearch)/sizeof(toSearch[0]);
  int i;
  int val;
  scanf("%d", &val);
  int flag = 0;
  for (i=0; i<len; i++){
  	if (toSearch[i] == val){
    	flag = 1;
        break;
    }
  }
  if (flag == 0){
  	printf("Not Found");
  } else{
  	printf("Found");
  }
  return 0;
}
