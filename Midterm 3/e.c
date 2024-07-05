#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
struct Stack {
    struct Node *top;
};
int IsEmpty(struct Stack *stack){
	if(stack->top)
		return 0;
	else 
		return 1;
}
void Push(struct Stack *stack, int value) {
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    new->data = value;
    new->next = stack->top;
    stack->top = new;
}
int Pop(struct Stack *stack) {
    int poppedValue = stack->top->data;
    struct Node *temp = stack->top;
    stack->top = stack->top->next;
    free(temp);
    return poppedValue;
}
void show(struct Stack *stack){
	struct Node *temp = stack->top;
	int i=1;
	while(temp){
		printf("%7d->",temp->data);
		temp=temp->next;
		if(i%5==0)
			printf("\n");
		i++;
	}
}
int main() {
    struct Stack stack;
	stack.top = NULL;
	FILE *file=fopen("Stack.txt","r");
	int n;
	while(fscanf(file,"%d",&n)!=EOF)
		Push(&stack,n);
	show(&stack);
}
