#include <stdio.h>
#include <stdbool.h>

// Homework 4.1
void hw4_1(){
    int i, j, k, l, m, count=0;
    for (i = 1; i < 6; i++)
        for (j = 1; j < 6; j++)
        if (j != i)
            for (k = 1; k < 6; k++)
            if (k != i && k != j)
                for (l = 1; l < 6; l++)
                if (l != i && l != j && l != k)
                    for (m = 1; m < 6; m++)
                    if (m != i && m != j && m != k && m != l){
                        printf("%d%d%d%d%d\t", i, j, k, l, m);
						count++;
					}
    printf("\nThere are %d orders in total.\n\n", count);
} 

// Homework 4.2
void hw4_2(){
	int n, output = 0;
    printf("Input a number: ");
    scanf("%d", &n);
    int i = n + 1, j;
    if(i<2)i=2;
    bool prime;
    while (output < 5) {
        prime = true;
        for (j = 2; j * j <= i; j++) 
            if (i % j == 0) {
                prime = false;
                break;
            }
        if (prime) {
            printf("%d ", i);
            output++;
        }
        i++;
    }
} 

int main(){
	hw4_1();
	hw4_2();
	return 0;
}
