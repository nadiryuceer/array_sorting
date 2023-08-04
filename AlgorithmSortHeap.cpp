#include "AlgorithmSortHeap.h"
#include "BinaryHeap.h"

AlgorithmSortHeap::AlgorithmSortHeap(int k)
{
	BinaryHeap *heap = new BinaryHeap(k);
	int n = 0;
	int temp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (i < k) {
			heap->insert(temp);
			}
		else {
			if (temp > heap->getMin()) {
				heap->deleteMin();
				heap->insert(temp);
			}
		}
	}
	this->k = heap->getMin();
	delete heap;
}
int AlgorithmSortHeap::select() {
	return k;
}
