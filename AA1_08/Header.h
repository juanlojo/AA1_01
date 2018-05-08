#pragma once
#include <iostream>
#include <deque>
#include <cstdio>
#include <cstdlib>

/*void superMerge(std::deque<int> d1, std::deque<int> d2){
	
}*/

void printReverse(std::deque<int> d3) {
	std::deque<int>::iterator it;
	for (it = d3.end(); it != d3.begin(); --it) {
		std::cout << ' ' << *it;
		std::cout << "\n";
	}
}


