#include <stdio.h>

void iterativeSolution(int n, int i){
	// For loop
	for (i=1; i<=10; i++){
		printf("%d x %d = %d\n", n, i, n*i);
	}

	// While loop
	while (i <= 10){
		printf("%d x %d = %d\n", n, i, n*i);
		i++;
	}
}

void recursiveSolution(int n, int i){
	// Recursive approach
	if (i > 10) return; 

	printf("%d x %d = %d\n", n, i, n*i);
	recursiveSolution(n, i+1);

}

int main(){
	// Calculates n*1 to n*10
	int n;
	scanf("%d", &n);
	printf("\n");

	iterativeSolution(n, 1);
	recursiveSolution(n, 1);

	return 0;
}
