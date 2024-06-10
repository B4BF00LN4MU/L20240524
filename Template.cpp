#include <iostream>
#include <vector>
#include "Player.h"
#include "Monster.h"

using namespace std;

int main()
{
	vector<Monster*> MyMonster;
	Player* MyPlayer = new Player();

	for (int i = 0; i < 5; ++i)
	{
		MyMonster[i]->Move();
		MyMonster[i]->Attack();
	}
	MyPlayer->Move();
	MyPlayer->Attack();

	return 0;
}