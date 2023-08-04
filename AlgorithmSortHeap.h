#include <iostream>
#include <string>
#include "SelectionAlgorithm.h"

using namespace std;

class AlgorithmSortHeap : public SelectionAlgorithm {
public:
	int select();
	AlgorithmSortHeap(int);

};