#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//13.1 
typedef struct node{
	char title[50];
	char author[50];
	int year;
	int id;
	
} Book;

void readBooksFromFile(Book *a){
	FILE *file=fopen("books.txt","r");
	int n = 0,c;
    while ((c = fgetc(file)) != EOF) {
        int i = 0;
        while (c != ',') {
            a[n].title[i++] = c;
            c = fgetc(file);
        }
        a[n].title[i] = '\0';
        
        while(c==' '||c==',')
			c = fgetc(file);
		
		
        i = 0;
        while (c != ',') {
            a[n].author[i++] = c;
            c = fgetc(file);
        }
        a[n].author[i] = '\0'; 

        
        fscanf(file, "%d", &a[n].year);
        fscanf(file, ", %d", &a[n].id);

        n++;
        fgetc(file);
    }
	fclose(file);
}
void printBooks(Book *a){
	int n=0;
	while(a[n].id){
		printf("Title: %s, Author: %s, Year: %d, ID: %d\n",a[n].title,a[n].author,a[n].year,a[n].id);
		n++;
	}
}
void updateBookInfo(Book *a){
	int n=0,id;
	printf("Enter the ID of the book to update: ");
	scanf("%d",&id);
	getchar();
	while(a[n].id!=id) n++;
	printf("Enter new title: ");
	gets(a[n].title);
	printf("Enter new author: ");
	gets(a[n].author);
	printf("Enter new year: ");
	scanf("%d", &a[n].year);
	getchar();
}

void writeBooksToFile(Book *a){
	FILE *file=fopen("books.txt","w");
	int n=0;
	while(a[n].id){
		fprintf(file,"%s, %s, %d, %d\n",a[n].title,a[n].author,a[n].year,a[n].id);
		n++;
	}
	fclose(file);
}

//13.2
void generate(int *a){
	int i,j,check;
	FILE *file=fopen("test.txt","w");
	for (i = 0; i < 1000; i++) {
        do {
            check = 0;
            a[i] = rand() % 9001 + 1000;
            for (j = 0; j < i; j++) {
                if (a[i] == a[j]) {
                    check = 1;
                    break;
                }
            }
        } while (check);
        fprintf(file, "%d\n", a[i]);
    }
	fclose(file);
}

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void bubbleSortRecursive(int *a,int n){
	if (n == 1) 
        return; 
    int count = 0,i;
    for(i=0; i<n-1; i++) 
        if (a[i] > a[i+1]){ 
            swap(&a[i], &a[i+1]); 
            count++; 
        } 
    if (count==0) 
        return; 
    bubbleSortRecursive(a, n-1); 
} 

int binarySearchRecursive (int *a,int l,int r,int n){
    if (l > r) 
    	return -1;
    int mid = (l + r)/2;   
    if (n == a[mid]) {
    	return mid;
    }
    else if (n < a[mid]){
    	return binarySearchRecursive(a, l, mid - 1, n);
    }
    else{
    	return binarySearchRecursive(a, mid + 1, r, n);
    }
}


int main() {    
	
	//13.1
	Book array[100] = {0};
    readBooksFromFile(array);
    int choice;
    while(1){
    	printf("1. Print all books\n");
        printf("2. Update a book\n");
        printf("3. Exit\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printBooks(array);
                break;
            case 2:
                updateBookInfo(array);
                writeBooksToFile(array);
                break;
            case 3:
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
        if (choice == 3){
        	break;
		}
	}
	
	//13.2
	srand(time(NULL));
	int a[1000]={0};
	generate(a);
	bubbleSortRecursive(a,1000);
	FILE *file=fopen("sorted.txt","w");
	int i;
	for(i=0;i<1000;i++){
		printf("%d\n",a[i]);
		fprintf(file,"%d\n",a[i]);
	}
	fclose(file);
	while(1){
		int number;
		printf("Enter a number to search: ");
		scanf("%d", &number);
		int n=binarySearchRecursive(a,0,1000,number);
		if(n>0)
			printf("Number found at index: %d\n",n+1);
		else
			printf("§A¦n\n");
	}
    return 0;
}

