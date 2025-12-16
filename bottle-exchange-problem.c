#include <stdio.h>

int numWaterBottles(int numBottles, int numExchange){
    int emptyBottles = numBottles;
    while (emptyBottles >= numExchange){
        numBottles += emptyBottles / numExchange;
        emptyBottles = (emptyBottles / numExchange) + (emptyBottles % numExchange);
    }
    return numBottles;
}

int main(){
	int numBottles, numExchange;
	
	printf("numBottles: "); scanf("%d", &numBottles);
	printf("numExchange: "); scanf("%d", &numExchange);
	printf("%d\n", numWaterBottles(numBottles, numExchange));

	return 0;
}
