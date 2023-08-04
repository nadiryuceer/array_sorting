#include "AlgorithmSortQuick.h"
AlgorithmSortQuick::AlgorithmSortQuick(int k) {
	int size;
	cin >> size;
	int *ar = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> ar[i];
	}
	this ->k = quickselect(ar, 0, size-1, k);
	
	
	
}
int AlgorithmSortQuick::select() {
	return k;
}
int AlgorithmSortQuick::quickselect(int numbers[], int left, int right, int k) {
	int temp;
	if (right - left <= 10) {
		for (int i = left+1; i <= right; i++) {
			for (int j = i - 1; j >= left; j--) {
				if (numbers[i] > numbers[j]) {
					temp = numbers[i];
					for (int c = i - 1; c >= j; c--) {
						numbers[c + 1] = numbers[c];
					}
					numbers[j] = temp;
					break;
				}
			}
		}
		return numbers[k-1];
	}
	else {
		int center = (left + right) / 2;
		int temp;
		if (numbers[center] < numbers[left]) {
			swap(numbers[center], numbers[left]);
		}
		if (numbers[right] < numbers[left]) {
			swap(numbers[right], numbers[left]);
		}
		if (numbers[right] < numbers[center]) {
			swap(numbers[right], numbers[center]);
		}
		swap(numbers[center], numbers[right]);

		int i = left - 1;
		int j = right;

		while (true) {
			while (numbers[++i] > numbers[right]) {}
			while (numbers[right] > numbers[--j]) {}
			if (i < j) {
				swap(numbers[i], numbers[j]);
			}
			else break;
		}
		swap(numbers[i], numbers[right]);

		if (i == k - 1) {
			return numbers[i];
		}
		else if (k <= i) {
			return quickselect(numbers, left, i - 1, k);
		}
		else return quickselect(numbers, i + 1, right,k);

	}
}