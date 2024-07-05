#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    srand(time(0));
    int a[3][3]={0},b[3][3]={0};
    int i,j;
    printf("a.\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            a[i][j]=rand()%101;
        printf("[%d %d %d]\n",a[i][0],a[i][1],a[i][2]);
    }
    printf("b.\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            b[i][j]=rand()%101;
        printf("[%d %d %d]\n",b[i][0],b[i][1],b[i][2]);
    }
    printf("add.\n");
    for(i=0;i<3;i++)
        printf("[%d %d %d]\n",a[i][0]+b[i][0],a[i][1]+b[i][1],a[i][2]+b[i][2]);
    printf("sub.\n");
    for(i=0;i<3;i++)
        printf("[%d %d %d]\n",a[i][0]-b[i][0],a[i][1]-b[i][1],a[i][2]-b[i][2]);
    return 0;
}