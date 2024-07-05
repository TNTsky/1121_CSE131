#include <stdio.h>
#include <stdlib.h>

// 全域變數紀錄移動次數 
int count=0;

// int *a就是int a[] (矩陣) 用來保存每個盤現在在哪個位置 'A'or'B'or'C'
// int n 現在要移動第幾個盤子 (從上往下數)
// int c 要移動到哪個盤子  'A'or'B'or'C' 
int move(int *a,int n,int c){   
	// 雖然矩陣有第0個 但沒有這盤子
	if(n<=0)
		return;
	else{
		if(a[n]=='A'){
			if(c=='B')
				move(a,n-1,'C');
			else
				move(a,n-1,'B');
		}
		else if(a[n]=='B'){
			if(c=='A')
				move(a,n-1,'C');
			else
				move(a,n-1,'A');
		}
		else{
			if(c=='A')
				move(a,n-1,'B');
			else
				move(a,n-1,'A');
		}
		printf(" Move disk %d from %c to %c\n",n,a[n],c);
		a[n]=c;
		move(a,n-1,c);
	}
	count++;
}

int main(void){
	int N;
	printf("Enter the number of disks :");
	while(scanf("%d",&N)!=EOF){
		count=0;
		if(1<=N&&N<=10){
			int a[N+1],i,j;
			for(i=0;i<=N;i++){
				a[i]='A';
			}
			printf("THe sequence of moves involved in the Tower of Hanoi are :\n\n");
			move(a,N,'C');
			printf("\n The number of moves : %d\n\n",count);
		}
		printf("Enter the number of disks :");
	}
}
