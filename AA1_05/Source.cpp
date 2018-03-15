#include <string>
#include <cstring>
#include <vector>
#include <iostream>

struct personas {
	std::string name;
	std::string birth;
	std::string dni;
};

std::vector<int>v1;
std::vector<int>v2(10);
std::vector<int>v3({ 10,9,8,7,6,5,4,3,2,1 });
std::vector<std::string>v4({"Gertrudiz","Pancracia","Anacleto","Hipolito","Eustaquio","Fulgencia" });
std::vector<int>v5(v3);
std::vector<personas>v6({ { "M. Rajoy", "01-02-1947", "12345678A" }, { "A. Rivera", "02-03-1980", "98765432B" }, { "P. Churches", "03-04-1978", "12985764N" } });

//Funciones

void addVectors(std::vector<int>v3, std::vector<int>v2) {
	int sum;
	int it;
	int it2;
	for (std::vector<int>::iterator it = v3.begin(); it != v3.end(); ++it) {
		std::cout << *it << " ";
	}
	for (std::vector<int>::iterator it2 = v2.begin(); it2 != v2.end(); ++it2){
		std::cout << *it2 << " ";
	}
	sum = it + it2;
}

int main() {
	addVectors;
	system("pause");
	return 0;
}
