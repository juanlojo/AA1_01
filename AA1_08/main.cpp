#include "Header.h"
#include <iostream>
#include <deque>
#include <cstdio>
#include <cstdlib>

void printReverse(std::deque<int> d3);

int main() {
	std::deque<int> a;
	for (int i = 1; i < 6; i++)a.push_back(i);
	printReverse(a);
	system("pause");
}

