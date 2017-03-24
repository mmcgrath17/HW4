#include "DoubleCap.h"
#include "FindSmallest.h"
#include "Course.h"


int main()
{
	//ex 01
	int siz;
	int * ptr = &siz;
	cout << "Enter the size of the array.\n";
	cin >> *ptr;
	const int size = *ptr;
	ptr = new int(size);
	
	cout << "Enter " << size << " values into the array.\n";
	for (int i = 0; i < size; i++)
	{
		cin >> ptr[i];
	}
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += ptr[i];
	}
	double average = (double)sum / (double)size;
	cout << average;

	//ex 03
	const int ray[] = { 1, 2, 4, 5, 10, 100, 2, -22 };
	const int * point = ray;
	findSmallest(point, 8);
	
	//ex 05
	string listStudents[] = { "Jack", "Jill", "Jeph" };
	string * pointerCourse = listStudents;

	Course english =  Course(listStudents);
	string *name;
	string temp = "Jimmy";
	*name = temp;
	english.addStudent(name);
	temp = "Jerome";
	english.addStudent(name);
	temp = "Jackie";
	english.addStudent(name);
	english.dropStudent();
	english.printStudents();


}