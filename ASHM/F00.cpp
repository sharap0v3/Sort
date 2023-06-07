#include "F00.hpp"

void FillingStack(stack <int> &stNum, int stSize)
{
	for (size_t i = 0; i < stSize; i++)
	{
		stNum.push(rand() % 10);
	}
}


void PrintStack(stack <int> &stNum)
{
	while (!stNum.empty()) {
		cout << " [" << stNum.top() << "] ";
		stNum.pop();
	}
}


void SortStack(stack <int> &stNum)
{
	vector <int> vecNum;

	//перекачка
	for (size_t i = 0; i < 10; i++)
	{
		vecNum.push_back(stNum.top());
		stNum.pop();
	}

	//печать
	PrintVector(vecNum);
	cout << "\n";

	//сортировка
	sort(vecNum.begin(), vecNum.end());
	reverse(vecNum.begin(), vecNum.end());

	//заполнние
	for (size_t i = 0; i < vecNum.size(); i++)
	{
		stNum.push(vecNum[i]);
	}
}

void PrintVector(vector<int>& vecNum)
{
	for (size_t i = 0; i < vecNum.size(); i++)
	{
		cout << " [" <<  vecNum[i] << "] ";
	}
}
