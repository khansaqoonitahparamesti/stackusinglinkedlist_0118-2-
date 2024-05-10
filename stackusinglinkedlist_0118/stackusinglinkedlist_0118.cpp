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
		cout << "push value:" << value << endl;
		return value;
	}

	//pop operation: removethe topmost element from the stack
	void pop() {
		if (isEmpty()) {
			cout << "stack is empty." << endl;
		}
		cout << "popped value:" << top->data << endl;
		top = top->next;

	}

	void peek() {
		if (top == NULL) {
			cout << "list is empty." << endl;
		}

		else {
			Node* current = top;

			while (current != NULL) {
				cout << current->data << " " << endl;
				current = current->next;
			}
			cout << endl;
		}
	}
	bool isEmpty() {
		return top == NULL;
	}
};

int main() {
	stack stack;

	int choice = 0;
	int value;

	while (choice != 5) {
		cout << "1.push\n";
		cout << "2.pop\n";
		cout << "3.peek\n";
		cout << "4.exit";
		cout << "enter your choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "enter the value to push:";
			cin >> value;
			stack.push(value);
			break;
		}
	}
}