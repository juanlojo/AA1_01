#include<string>
#include<ctime>
#include<iostream>
using namespace std;

string arr[5] = { "Hipolito", "Fulgencia", "Pancracia", "Eustaquio", "Jose" };

//1)

enum EnemyType
{
	zombie, vampire, ghost, witch
};

//2)

struct Enemy
{
	EnemyType type;
	int health;
	string name;
};

//3)

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

//4)

Enemy createRandomEnemy()
{
	Enemy enemy1;
	enemy1.health = rand() % 500 + 1;
	enemy1.name = arr[rand() % 4];
	enemy1.type = EnemyType(rand() % 3);

	return enemy1;
}

//5)

int getEnemyTypeString(EnemyType)
{
	
}