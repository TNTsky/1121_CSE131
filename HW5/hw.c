#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Homework 5.1
void hw5_1(){
	srand(time(NULL));
	int a=rand()%10,input;
	int b=a,c=a,d=a;
	while(b==a)
		b=rand()%10;
	while(c==a||c==b)
		c=rand()%10;
	while(d==a||d==b||d==c)
		d=rand()%10;
	int i,A,B;
	int ia,ib,ic,id;
	for(i=10;i>0;i--){
		A=0;B=0;
		printf("input four different number:(例如2178)");
		scanf("%d",&input);
		ia=input/1000;ib=(input/100)%10;ic=(input/10)%10;id=input%10;
		if(ia==ib||ia==ic||ia==id||ib==ic||ib==id||ic==id||input<0||input>9999){
			printf("Numbers should not be repeated. Try again.\n");
			i++;
			continue;
		}
		if(ia==a)A++;
		else if(ib==a||ic==a||id==a)B++;
		if(ib==b)A++;
		else if(ia==b||ic==b||id==b)B++;
		if(ic==c)A++;
		else if(ia==c||ib==c||id==c)B++;
		if(id==d)A++;
		else if(ia==d||ib==d||ic==d)B++;
		if(A==4){
			printf("您猜對了!\n\n");
			break;
		}
		if (i>1)printf("結果:%dA%dB，還有%d次機會...\n",A,B,i-1);
		else printf("失敗，猜超過10次，答案是%d%d%d%d\n\n",a,b,c,d);
	}
}

// Homework 5.2
void hw5_2(){
	int num,re=0;
	printf("Enter an integer: ");
	scanf("%d",&num);
	int n=num;
	do{
		re*=10;
		re+=n%10;
		n/=10;
	}
	while(n>0);
	printf("Reverded Number: %d\n",re);
	int a,b,temp;
    a=(num>re)?num:re;
    b=(num>re)?re:num;
	while(b!=0){
		temp=b;
		b=a%b;
		a=temp;
	}
	printf("GCD of %d and %d is %d\n",num,re,a);
}

int main(){
	hw5_1();
	hw5_2();
	return 0;	
}
