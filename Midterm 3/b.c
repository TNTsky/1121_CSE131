#include <stdio.h>
#include <stdlib.h>

// �����ܼƬ������ʦ��� 
int count=0;

// int *a�N�Oint a[] (�x�}) �ΨӫO�s�C�ӽL�{�b�b���Ӧ�m 'A'or'B'or'C'
// int n �{�b�n���ʲĴX�ӽL�l (�q�W���U��)
// int c �n���ʨ���ӽL�l  'A'or'B'or'C' 
int move(int *a,int n,int c){   
	// ���M�x�}����0�� ���S���o�L�l
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
