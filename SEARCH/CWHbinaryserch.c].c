#include<stdio.h>
int main()
{

    int arr[5]= {1,2,3,4,5};
    int target = 5;
    int low =0;
    int high = 5;
    int i = 0;
    int k = 0;
    while(high>=low) {
        int mid =low + (high - low) / 2;

        if(target == arr[mid]) {
            k = mid;

            i++;
            break;
            //k = 0;
        } else if(arr[mid]>target) {
            high = mid-1;
            //  i++;
        }

        else {
            low= mid+1;
        }
    }
    if(i > 0) {
        printf("element found at %d",k);

    } else {
        printf("element not found");
    }
    return 0;
}
