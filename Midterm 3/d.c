#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
	char ID[5];
	char Name[11];
	char Chi[3];
	char Eng[3];
	char Math[3];
}Array;

void show(Array *a){
	printf("%6s%12s%5s%5s%6s\n","ID","Name","Chi","Eng","Math");
	int i;
	for(i=0;i<20;i++){
		printf("%6s%12s%5s%5s%6s\n",a[i].ID,a[i].Name,a[i].Chi,a[i].Eng,a[i].Math);
	}
}

void swap(Array *a, Array *b) {
    Array temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_ID(Array *a,int n){
	if (n == 1) 
        return; 
    int count = 0,i;
    for(i=0; i<n-1; i++)  
        if (strcmp(a[i].ID, a[i+1].ID)>0){
            swap(&a[i], &a[i+1]); 
            count++; 
        } 
    if (count==0) 
        return; 
    bubble_ID(a, n-1); 
} 
void bubble_Name(Array *a,int n){
	if (n == 1) 
        return; 
    int count = 0,i;
    for(i=0; i<n-1; i++)  
        if (strcmp(a[i].Name, a[i+1].Name)>0){
            swap(&a[i], &a[i+1]); 
            count++; 
        } 
    if (count==0) 
        return; 
    bubble_Name(a, n-1); 
} 
void bubble_Chi(Array *a,int n){
	if (n == 1) 
        return; 
    int count = 0,i;
    for(i=0; i<n-1; i++)  
        if (strcmp(a[i].Chi, a[i+1].Chi)>0){
            swap(&a[i], &a[i+1]); 
            count++; 
        } 
    if (count==0) 
        return; 
    bubble_Chi(a, n-1); 
} 
void bubble_Eng(Array *a,int n){
	if (n == 1) 
        return; 
    int count = 0,i;
    for(i=0; i<n-1; i++)  
        if (strcmp(a[i].Eng, a[i+1].Eng)>0){
            swap(&a[i], &a[i+1]); 
            count++; 
        } 
    if (count==0) 
        return; 
    bubble_Eng(a, n-1); 
} 
void bubble_Math(Array *a,int n){
	if (n == 1) 
        return; 
    int count = 0,i;
    for(i=0; i<n-1; i++)  
        if (strcmp(a[i].Math, a[i+1].Math)>0){
            swap(&a[i], &a[i+1]); 
            count++; 
        } 
    if (count==0) 
        return; 
    bubble_Math(a, n-1); 
} 

int main(void){
	FILE *file=fopen("Student.txt","r");
	Array stu[20];
	int i=0;
	while(fscanf(file,"%s %s %s %s %s",stu[i].ID,stu[i].Name,stu[i].Chi,stu[i].Eng,stu[i].Math)!=EOF)
		i++;
	fclose(file);
	show(stu);
	int n;
	printf("Choose sorting method\n");
	printf("1. ID 2. Name 3.Chinese 4.English 5 Math 6.Exit: ");
	while(scanf("%d",&n)!=EOF){
		if(n==6)
			break;
		else if(n==1)
			bubble_ID(stu,20);
		else if(n==2)
			bubble_Name(stu,20);
		else if(n==3)
			bubble_Chi(stu,20);
		else if(n==4)
			bubble_Eng(stu,20);
		else if(n==5)
			bubble_Math(stu,20);
		if(0<n&&n<6)
			show(stu);
		printf("Choose sorting method\n");
		printf("1. ID 2. Name 3.Chinese 4.English 5 Math 6.Exit: ");
	}
	printf("Finish!");
	return 0;
}
