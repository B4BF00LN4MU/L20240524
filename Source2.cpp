#include<iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(nullptr));
	int RandNum = (rand() % 10);
	int Size = 10;
	int* Num = new int[Size];
	int NewNum = 0;

	for (int i = 0; i < Size; i++)
	{
		Num[i] = i + 1;
	}

	int* Temp = new int[Size + 1];

	cout << "숫자 입력 : ";
	cin >> NewNum;
	Temp[RandNum] = NewNum;

	for (int i = 0; i < RandNum; i++)
	{
		Temp[i] = Num[i];
	}
	for (int i = RandNum + 1; i < Size + 1; i++)
	{
		Temp[i] = Num[i - 1];
	}

	delete[] Num;

	Num = Temp;

	for (int i = 0; i < Size + 1; i++)
	{
		cout << Num[i] << endl;
	}

	return 0;
}