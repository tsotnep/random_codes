// problem: given a vector, print (lowest index of loop, length of loop)
// full problem description: http://prntscr.com/996zma
#include <stdio.h>

int main() {
	int n, sum = 0;
	scanf("%d", &n);
	int ar[n], exists[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &ar[i]);
	}
	int startInd = 0;
	while (sum != n) {
		int count = 0, currInd = startInd, nextInd = -1;
		while (startInd != nextInd) {
			if (exists[currInd] == 1)
				break;
			count++;
			exists[currInd] = 1;
			nextInd = ar[currInd];
			currInd = nextInd;
		}
		if (count > 0) printf("%d %d \n", startInd, count);
		sum += count;
		startInd++;
	}
	return 0;
}

