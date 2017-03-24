//ex 05

#include <string>
#include "DoubleCap.h"
using namespace std;

class Course
{
private:
	const string * students[];

public:
	Course(const string *list)
	{
		const string * point = list;
		*students = point;
	}

	void addStudent(string *name)
	{
		doubleCapacity(*students, sizeof(*students));
		students[sizeof(*students)] = name;
	}

	void dropStudent()
	{
		string *vod;
		string none = "";
		*vod = none;
		students[sizeof(*students) - 1] = vod;
	}

	void clear()
	{
		*students = new string[1];
	}

	~Course()
	{
		delete[] students;
	}



	void printStudents()
	{
		for (int i = 0; i < sizeof(*students); i++)
		{
			cout << *students[i];
		}

	}
};