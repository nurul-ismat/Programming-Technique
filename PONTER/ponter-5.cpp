//how many days of sales figures do you wish?

#include <iostream>
#include <iomanip>
using namespace std;

int main( )

{ 
	double * sales,
			total = 0.0,
			average;

	int numdays,
	count;
	
	cout << "how many days of sales figures do you wish";	
	cout << "to process?";
	cin >> numdays;
	
	sales = new double[numdays];
	
	cout<< "enter the sales figures below.\n";
	for (count =0; count < numdays; count++)
	{
		cout <<"days"<<(count+1)<<" : ";
		cin>> sales[count];
	}
	for (count = 0; count < numdays;count++)
	
	{
		total+=sales[count];
	}
	average=total/numdays;
	cout << fixed << showpoint << setprecision(2);
	cout << "\n\ntotal sales : $ << total << endl";
	cout << " average sales : $ << average << endl";
	
	
	delete [] sales;
	sales = 0;
	 return 0;
}
