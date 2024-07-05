#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *a,int *b)
{
    *a = *a^*b;
    *b = *a^*b;
    *a = *a^*b;

    return;
}

int main()
{
    int a = 1;
    int b = 2;

    swap(&a,&b);
    printf("%d, %d\n",a,b);
}
