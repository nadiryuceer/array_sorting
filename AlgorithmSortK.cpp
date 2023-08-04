#include "AlgorithmSortK.h"	

AlgorithmSortK::AlgorithmSortK(int k) {
	int n = 0;
	cin >> n;
	int *pNums = 0;
	pNums = new int[k];
	for (int i = 0; i < k; i++) {
		cin >> pNums[i];
	}
	int p = 0;
	int temp = 0;
	for (int i = 0; i < k; i++) {
		for(int j=i;j<k;j++){
			if (pNums[j] > temp) {
				p = j;
				temp = pNums[j];
			}
		}
		temp = pNums[i];
		pNums[i] = pNums[p];
		pNums[p] = temp;
		temp = 0;
	}
	p = 0;
	for (int i = k; i < n; i++) {
		cin >> temp;
		if (temp > pNums[k - 1]) {
			for (int j = 0; j < k; j++) {
				if (temp > pNums[j]) {
					for (int d = k - 1; d > j; d--) {
						pNums[d] = pNums[d - 1];
					}
					pNums[j] = temp;
					break;
				}
			}
		}
	}
	this->k = pNums[k - 1];

}
int AlgorithmSortK::select() {
	return k;
}