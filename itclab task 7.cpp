#include<iostream>
using namespace std;
void main()
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
			cout << "*";
	}
	system("pause");
	return 0;
}