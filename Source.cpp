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

	cout << "����" << endl;
	cout << "�����Ͻ÷��� 1, ���� �Ͻ÷��� 0�� �Է����ּ���" << endl;
	cin >> Key;

	if (Key == 1)
	{
		Play();
	}
	else if (Key == 0)
	{
		cout << "������ �����մϴ�";
		return 0;
	}

	cout << "������ ���ֽʽÿ�" << endl;
	cout << "������ : " << Money << endl;
	cout << "�ּұݾ��� 1000���Դϴ�" << endl;

	Bet();

	cout << "�÷��̾� ī�� ���� : " << PlayerX << " " << PlayerY << endl;
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
	cout << "1 : ���ĵ�, 2: ��Ʈ" << endl;
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
		cout << "����Ʈ" << endl;
		cout << Money << "-" << BetMoney << endl;
		Money = Money - BetMoney;
	}

	cout << "���� ī�� ���� : " << DealerX << " " << DealerY << endl;
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
		cout << "�ּҹ��ñݾ��� 1000���Դϴ�";
		Bet();
	}
	else if (Money < BetMoney)
	{
		cout << "�������� �����մϴ�.";
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