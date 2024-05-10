// stackusinglinkedlist_0118.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// node class representing a single node in the linked list
class Node {
public:
	int data;
	Node* next;

	Node() {
		next = NULL;
	}
};

// stack class
class stack {
private:
	Node* top;//pointer to the top node of the stack

public:
	stack() {
		top = NULL; //initialize the stack wtih null top pointer
	}

	//push operation : remove the topmost element onto the top of the stack
	int push(int value) {
		Node* newNode = new Node();
		newNode->data = value;
		newNode->next = top;
		top = newNode;
	}
};
