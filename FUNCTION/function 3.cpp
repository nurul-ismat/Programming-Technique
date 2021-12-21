//upper and lower case

#include <iostream>
#include <cctype> 
using namespace std; 
int main()
 {   
 char input;   
   cout<<"Enter any character: ";   
     cin.get(input);   
	   if (isalpha(input))
	   {  
	    cout.put(input);    
		  cout<<"It is an alphabet";
		  }     if (isdigit(input))     
		   cout<<"It is a digit";   
		     if (islower(input))    
			   cout<<"The letter entered is lowercase";  
			      if (isupper(input))     
				   cout<<"The letter entered is uppercase";    
				    return 0; 
					} 
