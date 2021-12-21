//pointer is equal 
#include<iostream>
using namespace std;
int main ()
{
      int value=13; 
    int *ptr1 = &value; 
	 int *ptr2 = &value; 
  if (ptr1==ptr2)
  {    
  cout <<"pointers are equal"; 
     }
	 else
	 {  
	  cout << "pointers are not equal"; 
	 }
	 return 0; 
	 } 
