#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
	
	while(1){
		srand(time(NULL));
		int n,i,j,k;
		printf("Please input the length: ");
		scanf("%d",&n);
		if(n<1||n>25){
			printf("Wrong input, input again!\n\n");
			continue;
		}
		int a[n];
		printf("\nOriginal array:\n");
		for(i=0;i<n;i++){
			a[i]=rand()%199-99;
			printf("%4d",a[i]);
		}
		int select;
		printf("\n\nSelect sorting method\n1. insertion sort 2.selection sort: ");
		scanf("%d",&select);
		if(select==1){
			int temp;
			for(i=0;i<n;i++){
				temp=a[i];
				j=i-1;
				while((j>=0)&&(a[j]>temp)){
					a[j+1]=a[j];
					j--;
				}
				a[j+1]=temp;
			}	
		}
		if(select==2){
			int min;
			for(i=0;i<n-1;i++){
				min=i;
				for(j=i;j<n;j++){
					if(a[j]<a[min]){
						min=j;
					}
				}
				swap(&a[i],&a[min]);
			}
		}
		printf("\nAfter sorted:\n");
		for(i=0;i<n;i++)
			printf("%4d",a[i]);
		
		printf("\n\nPlease input a number to search: ");
		int key;
		scanf("%d",&key);
		while(key!=100){
			int l=0,r=n-1,mid;
			while(l<=r){
				mid=(l+r)/2;
				if(key<a[mid]){
					r=mid-1;
				}
				else if(key>a[mid]){
					l=mid+1;
				}
				else
					break;
			}
			if(key==a[mid])
				printf("%d is No.%d element in array.\n",key,mid+1);
			else
				printf("%d is not element in array.\n",key);
			printf("\nPlease input a number to search: ");
			scanf("%d",&key);
		}
		printf("Return to the beginning.\n\n");
	}
	return 0;
}
