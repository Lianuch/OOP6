#include <iostream>
#include <windows.h>
using namespace std;

template <typename T> 
T number(T a)
{
	return fabs(a);
}


void main()
{
	system("color 3");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout<<"\tTask_1\n"<< endl;
	cout <<"Module of number:" << number(-9) << endl;
	
}

