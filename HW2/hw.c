#include <stdio.h>
#include <stdlib.h>

// HW1.1
void hw1_1(){
    char ID[11],name[100],blood[4];
	float h,w;

	printf("Please enter your student ID:");
	scanf("%s",&ID);
	printf("Please enter your name:");
	scanf("%s",&name);
	printf("Please enter your height:");
	scanf("%f",&h);
	printf("Please enter your weight:");
	scanf("%f",&w);
	printf("Please enter your blood type:");
	scanf("%s",&blood);
	
	printf("\nStudent ID:%s\n",ID);
	printf("Name:%s\n",name);
	printf("Height:%f\n",h);
	printf("Weight:%f\n",w);
	printf("Blood type:%s\n",blood);
	printf("BMI:%f\n\n",w/h/h*10000);

	return 0;
}

// HW1.2
void hw1_2(){
    char ch[3]="Aa0";
	for (int i=0;i<3;i++){
		char c=ch[i];
		printf("%c\n",c);
		printf("Octal representation: %o\n",c);
		printf("Decimal representation: %d\n",c);
		printf("Hexadecimal representation: %0x\n\n",c);
	}
}

int main(){
    hw1_1();
    hw1_2();
    return 0;
}