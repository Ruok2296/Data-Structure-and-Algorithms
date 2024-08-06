#include <stdio.h>

int main()
{

    int arr[]= {1,2,3,4,5};
    int arr2[5];
    int n = 9;
    int x;
    x = arr[2];
    arr[2]=n;
    for(int i = 0; i <5; i++) {
        arr2[i]=arr[i];
    }
    arr2[5]= x;
    for(int i = 0; i<6; i++) {
        printf("%d ",arr2[i]);
    }


    return 0;
}
