using namespace std;

//ex 03
void findSmallest(const int * values, int size)
{
	int smallest = 10000;//random large value
	for (int i = 0; i < size; i++)
	{
		if (smallest > values[i])
		{
			smallest = values[i];
		}
	} 
	cout << "The smallest value is " << smallest;
}