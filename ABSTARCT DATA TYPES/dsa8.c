#include <stdio.h>
#include<stdlib.h>
void createArray(struct myArray* a,int tsize,int usize);
void show(struct myArray *a);
void setVal(struct myArray *a);
struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};


int main() {

        struct myArray marks;
        createArray(&marks,10,2);
        printf("we are running start val now\n");
        setVal(&marks);
        printf("we are running show now\n");
        show(&marks);





 return 0;

}
void createArray(struct myArray* a,int tsize,int usize)
{
    a->total_size =tsize;
    a->used_size =usize;
    a->ptr = (int*)malloc(tsize*sizeof(int));

}
void show(struct myArray *a)
{

    for(int i = 0;i<a->used_size;i++)
    {
        printf("%d\n",(a->ptr)[i]);
    }
}
void setVal(struct myArray *a)
{
    int n ;
    for(int i = 0;i<a->used_size;i++)
    {
        printf("enter element %d:",i);
        scanf("%d",&n);
        (a->ptr)[i]= n;
    }
}
