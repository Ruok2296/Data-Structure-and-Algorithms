#include <stdio.h>
#include<stdlib.h>
struct myArray {
    int total_size;
    int used_size;
    int*ptr;

};
void createArray(struct myArray*a,int tsize,int usize)
{
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int*)malloc(tsize*sizeof(int));
}
void show(struct myArray *a)
{
    for(int i = a->used_size; i>0; i--) {
        printf("%d\n",(a->ptr)[i-1]);
    }
   /* for(int i = 0;i <a->used_size;i++){
        printf("%d\n",(a->ptr)[i]);
    }*/

}
void setVal(struct myArray *a)
{
    int n ;
    for(int i = 0; i<a->used_size; i++) {
        printf("enter element %d:",i);
        scanf("%d",&n);
        (a->ptr)[i]= n;
    }
}
int main()
{
    struct myArray marks;
    createArray(&marks,10,2);
    setVal(&marks);
    show(&marks);
    struct myArray b;
    createArray(&b,3,2);
    setVal(&b);
    show(&b);
    return 0;
}
