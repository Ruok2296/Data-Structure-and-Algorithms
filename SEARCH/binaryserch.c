#include <stdio.h>

int main() {
int a[6]= {1,2,3,4,5,6};
int target = 6;
int low = 0;
int high = 5;
int found= 0;
int k = 0;
while(high >= low){
    int mid =low + (high - low) / 2;

    if(a[mid]== target){
            k = mid;
        found++;
        printf("%d\n",mid);
        break;
    }else if (target < a[mid]){
        high= mid-1;
    }else{
        low= mid+1;
    }

}
  if(found>0){
    printf("element found at %d",k);
  }else {
    printf("element not found");
  }
    return 0;
}
