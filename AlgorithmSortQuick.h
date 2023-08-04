#include <iostream>
#include <string>
#include "SelectionAlgorithm.h"

class AlgorithmSortQuick : public SelectionAlgorithm {
public:
	AlgorithmSortQuick(int);
	int quickselect(int[], int, int, int);
	int select();
};
