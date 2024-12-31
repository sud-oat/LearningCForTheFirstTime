int main() {
  int toSearch[] = {1, 3, 4, 6, 10, 15, 21, 29, 53, 500};
  int len = sizeof(toSearch)/sizeof(toSearch[0]);
  int ub = len-1;
  int lb = 0;
  int val;
  printf("Enter value to search: \n");
  scanf("%d", &val);
  int flag = 0;
  while (lb<=ub){
  	int mid = (ub+lb)/2;
    if (val == toSearch[mid]){
    	flag = 1;
        break;
    } else if (val > toSearch[mid]){
    	lb = mid+1;
    } else {
    	ub = mid-1;
    }
  }
  if (flag == 0){
  	printf("Not Found");
  } else{
  	printf("Found");
  }
  return 0;
}
