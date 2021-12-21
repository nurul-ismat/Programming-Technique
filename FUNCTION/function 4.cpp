//UPPERCASE SHOW DISPLAY
#include <iostream>
 #include <cctype> 
 using namespace std; 
 int main()
  { 
   char input[15];  
      cout<<"Enter a name ";  
	     cin>>input;    
		  for(int i=0;input[i] != '\0';i++)  
		    input[i]= toupper(input[i]);  
			   cout<<"The name in upper case is:" << input; 
			       return 0;
				    } 
