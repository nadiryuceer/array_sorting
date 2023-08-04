#include "Testbed.h"
#include "SelectionAlgorithm.h"
#include "AlgorithmSortAll.h"
#include "AlgorithmSortK.h"
#include "AlgorithmSortHeap.h"
#include "AlgorithmSortQuick.h"
#include <ctime>


Testbed::Testbed() {

}
Testbed::~Testbed() {
	delete algorithm;
}
void Testbed::setAlgorithm(int type, int k) {
	if (type == 1) {
		algorithm = new AlgorithmSortAll(k);
		cout << "Result: " << algorithm->select() << endl;
	}
	else if (type==2) {
		algorithm = new AlgorithmSortK(k);
		cout << "Result: " << algorithm->select() << endl;

	}
	else if (type==3) {
		algorithm = new AlgorithmSortHeap(k);
		cout << "Result: " << algorithm->select() << endl;
	}
	else {
		algorithm = new AlgorithmSortQuick(k);
		cout << "Result: " << algorithm->select() << endl;
	}

}
void Testbed::execute() {
	// Time stamp before the computations
	clock_t start = clock();
	/* Computations to be measured */
	int type;
	cin >> type;
	int k = 0;
	cin >> k;
	this->setAlgorithm(type, k);
	
	// Time stamp after the computations
	clock_t end = clock();
	double cpu_time = static_cast<double>(end-start) / CLOCKS_PER_SEC;
	cout << cpu_time << endl;
	cout << "!!!Answers may differ because each text file is different from others!!!" << endl;
}
