
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

	long int arr[14][10];
	string country[14];
	int years[10]= {2006,2007,2008 ,2009,2010,2011,2012,2013,2014,2015};
	double avg[14];
	double sum=0;
	double Avg=0;
	double Max;
	string city;
	int highyear;
	
	fstream inFile("input.dat", ios::in);
	if (inFile.is_open())
	{
		for (int i = 0; i < 14; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				inFile >> arr[i][j];
			}
			getline(inFile, country[i]);
		}
	}
		cout<<" ";
	cout<<left;
	cout<<setw(30)<<"        state"<<setw(10);

	for(int f = 0 ;f<10;f++)
	{
		cout<<right;
		cout<< years[f]<<setw(10);
	
	}
	cout<<setw(12)<< "AVERGE"<<setw(10);
	cout<<endl;
		cout<<" ";
		
	for (int i = 0; i < 14; i++)
	{
		for(int j = 0; j < 10; j++)
		{
		sum +=arr[i][j];
		
		}
		Avg=sum/10;
		avg[i]=Avg;
		sum=0 ;
	}
	
	Max = arr[0][0];
	for (int i = 0; i < 14; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if(arr[i][j] > Max)
			{
				Max = arr[i][j];
				city = country[i];
				highyear=years[j];
				
				
			}
			
		}
		
	}
	
	
	
	for (int i = 0; i < 14; i++)
	{
		cout<<left;
		cout << setw(30) << country[i] << setw(10);
		
		for (int j = 0; j < 10; j++)
		{
			cout<<right; 
			cout << arr[i][j] << setw(10);
			
			
		}
		cout<< setprecision(1)<<fixed;
		cout<<right;
		cout<<setw(12)<< avg[i] <<setw(12);
		cout << endl;
	}
	
	cout<<" ";
	cout<<endl;
	cout<<"The highest number of road accidents = "<<setprecision(0)<<fixed<<Max<<" at "<<city<<" on "<<highyear;
	cout<<endl;
	cout<<" ";
	

	
	return 0;
}
