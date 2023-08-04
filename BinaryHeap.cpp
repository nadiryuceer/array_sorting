//============================================================================
// Name        : BinaryHeap.cpp
// Author      : Hasan Sozer
// Version     : 1.2
// Copyright   : (c) 2013 Ozyegin University
// Description : Includes the (incomplete) implementation file of the  
//               BinaryHeap class that will be used as part of the program    
//               to be submitted as Homework 3, which is assigned in the   
//               context of the course CS201, Data Structures and Algorithms.
//               
//               THE IMPLEMENTATION MUST BE COMPLETED TO MAKE ALL THE TESTS
//               IN THE MAIN METHOD PASS.
//
//               After completing the heap implementation, "BinaryHeap.h" and
//               "BinaryHeap.cpp" files will be used for extending homework 1,
//               and the extended program will be submitted as Homework 3.
//============================================================================

#include "BinaryHeap.h"

BinaryHeap::BinaryHeap(int capacity) {
    this->capacity = capacity;
	
	// The element at index 0 is not used!
	// The root element will be placed at index 1
	heap = new int[capacity+1];
	size = 0;
}

BinaryHeap::~BinaryHeap() {
	delete [] heap;
}

void BinaryHeap::insert(int element) {

	// TO BE COMPLETED
	if (size != capacity) {
		size++;
		heap[size] = element;
			int t = size;
			while (t > 1) {
				if (heap[t / 2] > heap[t]) {
					swap(t, t / 2);
					t = t / 2;
				}
				else break;
			}
			
	}
	
	// The capacity of the heap is assumed to be fixed.
	// Insert the element if size < capacity
	// Do nothing otherwise.
	
	// After the new element is inserted, perform a percolate up operation here.
	// You can add a percolateUp method to the class,
	// or just implement the operations within this insert method.
}

void BinaryHeap::deleteMin() {

	// TO BE COMPLETED
	
	// If the size is less than 1, do nothing and stop
	if (size < 1) {}
	// Otherwise, replace the root of the heap with the last element on the last level
	else {
		heap[1] = heap[size];
		size--;
		if (size > 1) {
			percolateDown(1);
		}
	}
	
	// Then, call the percolateDown function by providing the index of the root node, i.e., 1
}

int BinaryHeap::getMin() {
	
	// TO BE COMPLETED
	// If the size is less than 1, return -1
	// Otherwise, return the value of the root node
	if (size >= 1) return heap[1];
	
	return -1;
}

void BinaryHeap::percolateDown(int hole) {

	// TO BE COMPLETED
	
	// Compare the node with its children; if they are in the correct order, stop
	if (2 * hole > size) {}
	else if (2 * hole + 1 > size) {
		if (heap[hole] > heap[2 * hole]) {
			swap(2 * hole, hole);
			percolateDown(2 * hole);
		}
	}
	else if (heap[hole] < heap[2 * hole] && heap[hole] < heap[2 * hole + 1]) {}
	// Otherwise, swap the element with the smallest child
	else {
		if (heap[2 * hole] < heap[2 * hole + 1]) {
			swap(hole, 2 * hole);
			percolateDown(2 * hole);
		}
		else {
			swap(hole, 2 * hole + 1);
			percolateDown(2 * hole + 1);
		}
	}
	// Repeat the operation for the swapped child node
}

void BinaryHeap::swap(int i, int j) {
	int t = heap[i];
	heap[i] = heap[j];
	heap[j] = t;
}
