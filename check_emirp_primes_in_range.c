// problem : print numbers from given range, that are Emirp Primes. that means,they are primes if you read it from left-to-right, or right-to-left. 

#include <stdio.h>

int isPrime(int x) {
	for (int i = 2; i < x; i++) {
		if (x % i == 0 && i != x)
			return 0;
	}
	return 1;
}

int revOrder(int x) {
	int reordered, digit;
	reordered = x % 10;
	x = x / 10;
	while (x > 0) {
		digit = x % 10;
		reordered *= 10;
		reordered += digit;
		x = x / 10;
	}
	return reordered;
}

void printEmirps(int a, int b) {
	for (int I = a; I <= b; I++) {
		int reversedI = revOrder(I);
		if ((I != reversedI) && (isPrime(I)) && (isPrime(reversedI))) {
			printf("%d \n", I);
		}
	}
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printEmirps(a, b);
	return 0;
}

