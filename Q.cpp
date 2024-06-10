#include<iostream>

using namespace std;

class World
{
	void Finish();

	Floor Floors[100];
	Wall Walls[100];
	Player MyPlayer[1];
	Monster Monsters[100];
	Goal Goal[100];
};

class Wall
{
	int X;
	int Y;
	int Shape;
	void Block();
};

class Floor
{
	int X;
	int Y;

	int Shape;
};

class Player
{
	int X;
	int Y;
	int Shape;
	void Move();
	void Arrive();
};

class Monster
{
	int X;
	int Y;
	int Shape;
	void Move();
};

class Goal
{
	int X;
	int Y;

	int Shape;
};

class Engine
{
	World MyWorld;

	void Run()
	{
		while (true)
		{
			void Render();
			void Tick();
			void Render();
		}
	};
	void Render();
	void Tick();
	void Render();
};

void Move();
void Arrive();
void Finish();
void Block();


int main()
{
	Engine* MyEngine = new Engine();

	MyEngine->Run();

	delete MyEngine;;


	return 0;
}