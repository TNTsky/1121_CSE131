#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int check(int* str,int size,int num)
{
	int i;
	
	for (i=0;i<size;i++)
	{
		if (num==str[i]) {
			return 1;
		}
	}
	
	return 0;
}

int* getriddle(int n)
{
	int *riddle_ans = (int*)malloc(sizeof(int)*n);
	int i;
	int tmd;
	
	for (i=0;i<n;i++)
	{
		tmd = rand()%10;
		while (check(riddle_ans,i,tmd)) {
			tmd = rand()%10;
		}
		riddle_ans[i] = tmd;
	}
	
	return riddle_ans;
}

void get_ans(int *str)
{
	int i;
	int num;
	
	scanf("%d",&num);
	
	for (i=3;i>=0;i--)
	{
		str[i] = num%10;
		num /= 10;
	}
	
	return;
}

int main()
{
	srand(time(NULL));
	
	int *riddle_ans = getriddle(4);
	int A,B;
	int ans[4];
	int i,j;
	int flag = 1;

	for (i=0;i<4;i++) {printf("%d",riddle_ans[i]);}
	printf("\n\n");

	while (flag)
	{
		get_ans(ans);
		A=0;
		B=0;
		
		for (i=0;i<4;i++)
		{
			for (j=0;j<4;j++)
			{
				if (ans[i]==riddle_ans[j])
				{
					(i==j) ? (A++) : (B++);
				}
			}
		}
		
		if (A==4)
		{
			flag=0;
		}
		else
		{
			printf("%dA%dB\n",A,B);
		}
	}
	
	printf("CORRECT!\n");
}
