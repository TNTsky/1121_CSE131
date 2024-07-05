#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <stdbool.h>

int main(void){
	
	// aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
	int input,a,b,c,d;
	printf("Please input an integer: ");
		scanf("%d",&input);
	while(input!=0){
		while(input<1||input>3999){
			printf("Wrong input, input again!\n\n");
			printf("Please input an integer: ");
			scanf("%d",&input);
		}
		printf("Roman numeral: ");
		a=input/1000;
		b=input%1000/100;
		c=input%100/10;
		d=input%10;
		int i;
		for(i=0;i<a;i++)
			printf("M");
		switch(b){
			case 9:
				printf("CM");
				break;
			case 4:
				printf("CD");
				break;
			default:
				switch(b>5){
					case 1:
						b%=5;
						printf("D");
					default:
						for(i=0;i<b;i++)
							printf("C");
						break;
				}
		}
		switch(c){
			case 9:
				printf("XC");
				break;
			case 4:
				printf("XL");
				break;
			default:
				switch(c>5){
					case 1:
						c%=5;
						printf("L");
					default:
						for(i=0;i<c;i++)
							printf("X");
						break;
				}
		}
		switch(d){
			case 9:
				printf("IX");
				break;
			case 4:
				printf("IV");
				break;
			default:
				switch(d>5){
					case 1:
						d%=5;
						printf("V");
					default:
						for(i=0;i<d;i++)
							printf("I");
						break;
				}
		}
		printf("\n\nPlease input an integer: ");
		scanf("%d",&input);
	}
	printf("Go to next question\n\n");
	
	
	//	bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb
	printf("Please input an integer: ");
	scanf("%d",&input);
	int in,re;
	while(input!=0){
		while(input<1||input>214748364){
			printf("Wrong input, input again!\n\n");
			printf("Please input an integer: ");
			scanf("%d",&input);
		}
		in=input;
		re=0;
		while(in>0){
			re=re*10+(in%10);
			in/=10;
		}
		if(input==re)
			printf("%d is palindrome.\n\n",input);
		else
			printf("%d is not palindrome.\n\n",input);
		printf("Please input an integer: ");
		scanf("%d",&input);
	}
	printf("Go to next question\n\n");
	
	
	//	ccccccccccccccccccccccccccccccccccccccccccccccc
	int Y,M,D,W,correct,leap;
	printf("Please input a date (yyyy/mm/dd): ");
	scanf("%d/%d/%d",&Y,&M,&D);
	while(Y!=0||M!=0||D!=0){
		correct=1;
		leap=0;
		if(Y<0)
			correct=0;
		else{
			if(Y%4==0){
				if(Y%100==0){
					if(Y%400==0)
						leap=1;
				}
				else
					leap=1;
			}
			switch(M){
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					if(D<1||D>31)
						correct=0;
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					if(D<1||D>30)
						correct=0;
					break;
				case 2:
					if(leap==1){
						if(D<1||D>29)
							correct=0;
					}
					else{
						if(D<1||D>28)
							correct=0;
					}
					break;
				default:
					break;
			}
		}
		if(correct==0){
			printf("The date is wrong, input again!\n");
		}
		else{
			int i;
			W=1;
			for(i=1;i<Y;i++){
				leap=0;
				if(Y%4==0){
					if(Y%100==0){
						if(Y%400==0)
							leap=1;
					}
					else
						leap=1;
				}
				if(leap==1)
					W+=366;
				else
					W+=365;
			}
			W%=7;
			printf("%d/01/01 is ",Y);
			switch(W){
				case 1:
					printf("Monday.\n");
					break;
				case 2:
					printf("Tuesday.\n");
					break;
				case 3:
					printf("Wednesday.\n");
					break;
				case 4:
					printf("Thursday.\n");
					break;
				case 5:
					printf("Friday.\n");
					break;
				case 6:
					printf("Saturday.\n");
					break;
				default :
					printf("Sunday.\n");
					break;
			}
			for(i=1;i<M;i++){
				if(i==1||i==3||i==5||i==7||i==8||i==10)
					W+=31;
				else if(i==4||i==6||i==9||i==11)
					W+=30;
				else if(leap==1)
					W+=29;
				else
					W+=28;
			}
			W%=7;
			printf("%d/%d/01 is ",Y,M);
			switch(W){
				case 1:
					printf("Monday.\n");
					break;
				case 2:
					printf("Tuesday.\n");
					break;
				case 3:
					printf("Wednesday.\n");
					break;
				case 4:
					printf("Thursday.\n");
					break;
				case 5:
					printf("Friday.\n");
					break;
				case 6:
					printf("Saturday.\n");
					break;
				default :
					printf("Sunday.\n");
					break;
			}
			W=(W+D-1)%7;
			printf("%d/%d/%d is ",Y,M,D);
			switch(W){
				case 1:
					printf("Monday.\n");
					break;
				case 2:
					printf("Tuesday.\n");
					break;
				case 3:
					printf("Wednesday.\n");
					break;
				case 4:
					printf("Thursday.\n");
					break;
				case 5:
					printf("Friday.\n");
					break;
				case 6:
					printf("Saturday.\n");
					break;
				default :
					printf("Sunday.\n");
					break;
			}
		}
		printf("\nPlease input a date (yyyy/mm/dd): ");
		scanf("%d/%d/%d",&Y,&M,&D);
	}
	printf("Go to next question\n\n");
		
	
	// ddddddddddddddddddddddddddddddddddddddddddddddddddd
	int N,MM,R,RR;
	printf("Please enter a pair of integers (M,N) : ");
	scanf("(%d,%d)",&M,&N);
	while(M!=0||N!=0){
		if((1<=M&&M<=65535)&&(2<=N&&N<=16)){
			MM=M;
			re=0;
			R=0;
			while(M>0){
				M/=N;
				R++;
			}
			printf("%d in base %d system is ",M,N);
			int i;
			for(i=R;i>0;i--){
				int j;
				RR=N;
				for(j=R;j>1;j--){
					RR*=N;
				}
				switch(MM/RR){
					case 15:
						printf("F");
						break;
					case 14:
						printf("E");
						break;
					case 13:
						printf("D");
						break;
					case 12:
						printf("C");
						break;
					case 11:
						printf("B");
						break;
					case 10:
						printf("A");
						break;
					default :
						printf("%d",(MM/RR));
						break;
				}
			}
		}
		else{
			printf("Wrong input, input again!\n\n");
		}
	}
	
	
	
	
	
	
	return 0;
} 
