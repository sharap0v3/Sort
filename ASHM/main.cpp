#include "F00.hpp"

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	std::stack <int> stNum;

	FillingStack(stNum, 10);
	cout << "stack: ";
	SortStack(stNum);
	cout << "sort stack: ";
	PrintStack(stNum);
	

	return 0;
}
