#pragma once

struct Node
{
	Node * Next;
	int data;
};

class MyQueue
{
public:
	MyQueue(int qS);
	~MyQueue();
	int push();
	int pop();
	bool isEmpty();
	int front();
	int back();
	//swap
	int size();
	int minElement();
	int maxElement();
	bool sameElements();


private:
	int nItem; //numero de items de Queue
	int qSize; //tamaño de queue
	Node * Next;
};




