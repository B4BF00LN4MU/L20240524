#include <iostream>//dddd
#include <conio.h>
#include <time.h>

using namespace std;

void Input();
void Play();
void Bet();
void Show();
void Reset();

int DealerX = 0;
int DealerY = 0;
int PlayerX = 0;
int PlayerY = 0;
int Money = 10000;
int MinBet = 1000;
int Key = -1;
int BetMoney = 0;
int Choice = 0;
int PlayerZ = 0;

int main()
{

	srand(time(nullptr));
	DealerX = (rand() % 13) + 1;
	DealerY = (rand() % 13) + 1;
	PlayerX = (rand() % 13) + 1;
	PlayerY = (rand() % 13) + 1;

	cout << "블랙잭" << endl;
	cout << "시작하시려면 1, 종료 하시려면 0을 입력해주세요" << endl;
	cin >> Key;

	if (Key == 1)
	{
		Play();
	}
	else if (Key == 0)
	{
		cout << "게임을 종료합니다";
		return 0;
	}

	cout << "배팅을 해주십시오" << endl;
	cout << "소지금 : " << Money << endl;
	cout << "최소금액은 1000원입니다" << endl;

	Bet();

	cout << "플레이어 카드 오픈 : " << PlayerX << " " << PlayerY << endl;
	if (PlayerX > 10)
	{
		for (int i = 0; PlayerX <= 10; i++)
		{
			PlayerX--;
		}
	}
	if (PlayerY > 10)
	{
		for (int i = 0; PlayerY <= 10; i++)
		{
			PlayerY--;
		}
	}
	cout << "1 : 스탠드, 2: 히트" << endl;
	cin >> Choice;
	if (Choice == 2)
	{
		PlayerZ = (rand() % 13) + 1;
		cout << PlayerZ << endl;
		for (int i = 0; PlayerZ <= 10; i++)
		{
			PlayerZ--;
		}
	}
	if (PlayerX + PlayerY + PlayerZ > 21)
	{
		cout << PlayerX;
		cout << "버스트" << endl;
		cout << Money << "-" << BetMoney << endl;
		Money = Money - BetMoney;
	}

	cout << "딜러 카드 오픈 : " << DealerX << " " << DealerY << endl;
	if (DealerX > 10)
	{
		for (int i = 0; DealerX <= 10; i++)
		{
			DealerX--;
		}
	}
	if (DealerY > 10)
	{
		for (int i = 0; DealerY <= 10; i++)
		{
			DealerY--;
		}
	}

	return 0;
}

void Input()
{
	Key = _getch();
}

void Play()
{

}

void Bet()
{
	cin >> BetMoney;
	if (BetMoney < MinBet)
	{
		cout << "최소배팅금액은 1000원입니다";
		Bet();
	}
	else if (Money < BetMoney)
	{
		cout << "소지금이 부족합니다.";
		Bet();
	}
	else if (MinBet <= BetMoney && BetMoney <= Money)
	{

	}
}


void Show()
{
}

void Reset()
{
}