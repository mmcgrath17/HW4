#include <iostream>
#include <string>
using namespace std;

//ex 02
string *doubleCapacity(const string * list, int size)
{
	int newSize = size * 2;

	string * tempArray = new string[newSize];
	for (int i = 0; i < size; i++)
	{
		tempArray[i] = list[i];
	}
	return tempArray;
}