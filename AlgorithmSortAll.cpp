#include "AlgorithmSortAll.h"

int AlgorithmSortAll::select() {
	return k;
}
AlgorithmSortAll::AlgorithmSortAll(int k) {
	this->k = k;
	int *pNums = 0;
	int n = 0;
	cin >> n;
	pNums = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> pNums[i];
	}
	int temp = 0;
	int p = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (pNums[j] > temp) {
				p = j;
				temp = pNums[j];
			}
		}
		temp = pNums[i];
		pNums[i] = pNums[p];
		pNums[p] = temp;
		temp = 0;

		this->k = pNums[k - 1];
	}
}