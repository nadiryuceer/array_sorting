#include <iostream>
#include <string>
#include "SelectionAlgorithm.h"

using namespace std;

class Testbed {
private:
	SelectionAlgorithm *algorithm;
public:
	void execute();
	void setAlgorithm(int, int);
	Testbed();
	~Testbed();
};
