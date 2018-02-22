#include <ctime>
#include <string>
#include <iostream>

const int NUM_ROWS = 10;
const int NUM_COLUMNS = 20;

enum Movement {UP, DOWN, LEFT, RIGHT};

int board[NUM_ROWS][NUM_COLUMNS];

struct objects {
	int rocks;
	int coins;
	int player;
};

struct playerInfo {
	int position;
	int score;
};

void initializeBoard(int &board) {
	for (int i = 0; i < 60; i++)
	{
		
	}
	for (int j = 0; j < 40; j++)
	{

	}
}

bool checkMovement(playerInfo currentPosition, Movement)
{
	switch (currentPosition.position)
	{
	case Movement::DOWN:
	default:
		break;
	}
	
}