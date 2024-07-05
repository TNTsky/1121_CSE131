#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *a,int *b){
	*a=*a^*b;
	*b=*a^*b;
	*a=*a^*b;
}

int main(void){
	srand(time(0));
	int m,n,i,j,k,temp;
	printf("Frist array length:\n");
	scanf("%d",&m);
	int a[m];
	printf("\nSecond array length:\n");
	scanf("%d",&n);
	int b[n];
	
	printf("First array:[ ");
	for(i=0;i<m;i++){
		a[i]=rand()%21;
		printf("%d ",a[i]);
	}
	printf("]\nAfter bubble sort:[ ");
	// bubble sort
	for(i=0;i<m;i++){
		for(j=0;j<m-i-1;j++){
			if(a[j]>a[j+1])
				swap(&a[j],&a[j+1]);
		}
	}
	for(i=0;i<m;i++) printf("%d ",a[i]);
	
	printf("]\nSecond array:[ ");
	for(i=0;i<n;i++){
		b[i]=rand()%21;
		printf("%d ",b[i]);
	}
	printf("]\nAfter insertion sort:[ ");
	// insertion sort
	for(i=1;i<n;i++){
		temp=b[i];
		j=i;
		while((b[--j]>temp)&&j>=0){
			b[j+1]=b[j];
		}
		b[j+1]=temp;
	}
	for(i=0;i<n;i++) printf("%d ",b[i]);
	
	printf("]\nAfter merge and sorting:[ ");
	i=j=0;
	while(i<m&&j<n){
		if(b[j]<a[i])
			printf("%d ",b[j++]);
		else
			printf("%d ",a[i++]);
	}
	while(i<m)
		printf("%d ",a[i++]);
	while(j<n)
		printf("%d ",b[j++]);
	printf("]");
	
	return 0;
}
	
	
