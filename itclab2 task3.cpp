#include<iostream>
using namespace std;
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < height -i-1; j++)
		{
			cout << "*";
		}
	}
	system("pause");
	return 0;
}