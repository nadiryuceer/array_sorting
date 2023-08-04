#ifndef _SELECTIONALGORITHM_
#define _SELECTIONALGORITHM_



#include <iostream>
#include <string>

using namespace std;

class SelectionAlgorithm {
protected:
	int k;
public:
	virtual int select();
	SelectionAlgorithm(int);
	SelectionAlgorithm();
};

#endif