#include <stdio.h>

void swap(int*p1,int*p2);

int main(int argc, char const *argv[])
{
    int a = 10,b = 20;
    printf("the value of a:%d and the value of b:%d\n",a,b);
    swap(&a,&b);
    printf("the value of a:%d and the value of b:%d after the swapping\n",a,b);
    return 0;
}

void swap(int*p1,int*p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}