#include<stdio.h>
#include<stdlib.h>

int main(void){
    int n,N=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Side length of triangle:\n");
    int i,j;
    for(i=2;i<n;i++){
        for(j=n+1;j<n+i;j++){
            printf("%d %d %d\n",i,n,j);
            N++;
        }
    }
    printf("Number of triangles with n as the middle side length: %d\n",N);
    return 0;
}