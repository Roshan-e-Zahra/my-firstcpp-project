#include<iostream>
using namespace std;
int main()
{
	for (int i = 0; i < height; i++)
	{
		for (intj = 0; j < height - i - 1; j++)
		{
			cout << "*";
		}
		for (intj = 0; j <= i; j++)
			cout << "*";
	}
	cout << endl;
	system("pause");
	return 0;
}