#include <stdio.h>

int gcd(int a, int b){
	if (a ==0)
		return b;
	return gcd(b % a, a);
}

int gcdArray(int arr[], int n){
	int gcd_result = arr[0];
	for (int i = 1; i<n; i++){
		gcd_result = gcd(gcd_result, arr[i]);
		if (gcd_result == 1){
			break;
		}
	}
	return gcd_result;
}

int main(){
	int T;
	scanf("%d", &T);

	int results[T];

	for (int i=1; i<=T; i++){
		int n;
		scanf("%d", &n);

		int arr[n];
		for (int j=0; j<n; j++){
			scanf("%d", &arr[j]);
		}
		int gcd_result=gcdArray(arr, n);
		results[i] = gcd_result;
	}

	for (int i=1; i<=T; i++)
		printf("Case #%d: %d\n", i, results[i]);

	return 0;
}
