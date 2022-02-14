#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
class Employer
{
public:
	string FIO;
	int age;
	int salary;
	int stage;
	string dolg;
	Employer(const char* t,int a,int s,int st, const char* d)
	{
		age = a;
		FIO= t;
		salary = s;
		stage = st;
		dolg= d;
	}
	Employer()
	{
		age = 0;
		FIO="Ivan";
		salary = 0;
		stage = 0;
		dolg="Bezrabot";
	}
	virtual void print() = 0;
};
class Presdent :public Employer
{
	string country;
public:
	Presdent()
	{
		cout << endl << "Presdent:" << endl<<endl;
		string t;
		cout << "Set FIO"  << "\n";
		cin >> t;
		FIO = t;
		cout << "Set age"  << "\n";
		cin >> age;
		cout << "Set salary" << "\n";
		cin >> salary;
		cout << "Set stage" << "\n";
		cin >> stage;
		dolg = "Presdent";
		cout << "Set Country";

	}
	virtual void print()
	{
		cout << "Mr."  << FIO << "\n";
		cout << "Have dolgnost " << dolg << "\n";
		cout << "Hi is " << age<<" years" << "\n";
		cout << "Have stage " << stage << "\n";
		cout << "Have salary " << salary << "\n";
	}
};
class Manager :public Employer
{
public:
	Manager()
	{
		cout << endl << "Manager:" << endl << endl;
		string t;
		cout << "Set FIO" << "\n";
		cin >> t;
		FIO = t;
		cout << "Set age" << "\n";
		cin >> age;
		cout << "Set salary" << "\n";
		cin >> salary;
		cout << "Set stage" << "\n";
		cin >> stage;
		cout << "Set post" << "\n";
		cin >> dolg;
	}
	virtual void print()
	{
		cout << "Mr." << FIO << "\n";
		cout << "Have dolgnost " << dolg << "\n";
		cout << "Hi is " << age << " years" << "\n";
		cout << "Have stage " << stage << "\n";
		cout << "Have salary " << salary << "\n";
	}
};
class Worker :public Employer
{
public:
	Worker()
	{
		cout << endl << "Worker:" << endl << endl;
		string t;
		cout << "Set FIO" << "\n";
		cin >> t;
		FIO = t;
		cout << "Set age" << "\n";
		cin >> age;
		cout << "Set salary" << "\n";
		cin >> salary;
		cout << "Set stage" << "\n";
		cin >> stage;
		cout << "Set post" << "\n";
		cin >> dolg;
	}
	virtual void print()
	{
		cout << "Mr." << FIO << "\n";
		cout << "Have dolgnost " << dolg << "\n";
		cout << "Hi is " << age << " years" << "\n";
		cout << "Have stage " << stage << " years" << "\n";
		cout << "Have salary " << salary<<" $" << "\n";
	}
};
void main()
{
	Employer* s[3] = { new Presdent(),new Manager(),new Worker() };
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << endl;
		s[i]->print();
		cout << endl;
	}
}