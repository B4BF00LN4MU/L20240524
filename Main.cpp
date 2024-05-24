#include<iostream>
#include<vector>
#include<list>
#include <time.h>


using namespace std;

int main()
{
	srand(time(nullptr));
	int A = 0;
	int B = (rand() % 10);

	list<int>IntList;
	for(int i=1;i<11;++i)
	{
		IntList.push_back(i);
	}
	cin >> A;
	cout << endl;
	IntList.insert(find(IntList.begin(), IntList.end(), B), A);


	for (auto& Data : IntList)
	{
		cout << Data << endl;
	}
}
