#include <stdio.h>

void useTempVar(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;

	printf("Result #1\na = %d\nb = %d", a, b);
	printf("\n\n");
}

void useAddSub(int a, int b){
	a = a + b;
	b = a - b;
	a = a - b;

	printf("Result #2\na = %d\nb = %d", a, b);
	printf("\n\n");
}

void useBitwise(int a, int b){
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("Result #3\na = %d\nb = %d", a, b);
	printf("\n\n");
}

void usePointers(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;

	printf("Result #4\na = %d\nb = %d", *a, *b);
	printf("\n\n");
}

int main(){
	int a, b;
	printf("Enter two numbers to swap: ");
	scanf("%d %d", &a, &b);

	printf("Initial values\na = %d\nb = %d", a, b);
	printf("\n\n");

	// Run functions
	useTempVar(a, b);
	useAddSub(a, b);
	useBitwise(a, b);
	usePointers(&a, &b);
}
