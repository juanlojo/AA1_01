#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int main() {
	std::map<std::string, int>players;
	std::vector<std::pair<std::string, int>> mapVector;

	players["Juan"] = { 250 };
	players["Alex"] = { 400 };
	players["Boi"] = { 720 };
	players["Josito"] = { 1000 };

	for (auto iterator = players.begin(); iterator != players.end(); ++iterator) {
		mapVector.push_back(*iterator);
	}
	std::sort(mapVector.begin(), mapVector.end());
	std::cout << mapVector.begin <<std::endl;
	system("pause");

	/*std::cout << "myvector contains:";
	for (std::vector<std::string, int>::iterator it = mapVector.begin(); it != mapVector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';
	return 0;*/
}