// program uses two functions

#include<iostream>
using namespace std;

void getnumber (int *);
void doublevalue(int *);

int main ( )
{
	int number;
	getnumber ( & number);
	doublevalue ( &number);
	 
	 cout << "the value doubled is " << number << endl;
	 
	 return 0;
}

void getnumber(int * input)
{
	cout << "enter an integer number";
	cin >> *input;
}
void doublevalue(int*val)
{
	*val *=2;
}
