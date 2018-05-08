#include "MyQueue.h"

MyQueue::MyQueue(int qS)
{
	qS = qSize;
	nItem = 0;
	Next = nullptr;
}

MyQueue::~MyQueue()
{
	Node * temp;


}

int MyQueue::push()
{
}

int MyQueue::pop()
{

}

bool MyQueue::isEmpty()
{
	return nItem == qSize;
}