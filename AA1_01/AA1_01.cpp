#include<string>
#include<ctime>
#include<iostream>
using namespace std;

string arr[5] = { "Hipolito", "Fulgencia", "Pancracia", "Eustaquio", "Jose" };

//1)

enum EnemyType {zombie, vampire, ghost, witch};

//2)

#pragma region "//2 version 1"
struct Enemy
{
	EnemyType type;
	int health;
	string name;
};
#pragma endregion


//3)

#pragma region "// 3 version 1"

bool equalEnnemies(Enemy enemi1, Enemy enemi2)
{
	/*if (enemi1.type == enemi2.type && enemi1.name == enemi2.name)
	{
		return true;
	}
	else
	{
		return false;
	}*/
	return (enemi1.type == enemi2.type && enemi1.name == enemi2.name);
}
#pragma endregion

//4)

#pragma region "//4 version 1"

Enemy createRandomEnemy()
{
	Enemy enemy1;
	enemy1.health = rand() % 500 + 1;
	enemy1.name = arr[rand() % 4];
	enemy1.type = EnemyType(rand() % 3);

	return enemy1;
}
#pragma endregion

//5)

#pragma region "//5 version 1"

string getEnemyTypeString(EnemyType enemy1)
{
	switch (enemy1)
	{
	case EnemyType::zombie:
		return "zombie";
		break;
	case EnemyType::vampire:
		return "vampire";
		break;
	case EnemyType::ghost:
		return "ghost";
		break;
	case EnemyType::witch:
		return "witch";
		break;
	default:
		return "";
		break;
	}
}
#pragma endregion