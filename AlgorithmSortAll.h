#include <iostream>
#include <string>
#include "SelectionAlgorithm.h"

using namespace std;

class AlgorithmSortAll : public SelectionAlgorithm {
public:
	int select();
	AlgorithmSortAll(int);
};
