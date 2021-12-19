//conditions (if, if-else, if...else...else if, Nested if...else

#include <iostream>
using namespace std;

int main() {

  int number;

  cout << "Enter an integer: ";
  cin >> number;

  // checks if the number is positive
  if (number > 0) {
    cout << "You entered a positive integer: " << number << endl;
  }

  cout << "This statement is always executed.";
  
  //checks if---else the number is positive
if (number >= 0) {
    cout << "You entered a positive integer: " << number << endl;
  }
  else {
    cout << "You entered a negative integer: " << number << endl;
  }

  cout << "This line is always printed.";
  
  //checks if...else...else if
  if (number > 0) {
    cout << "You entered a positive integer: " << number << endl;
  } 
  else if (number < 0) {
    cout << "You entered a negative integer: " << number << endl;
  } 
  else {
    cout << "You entered 0." << endl;
  }

  cout << "This line is always printed.";
  
  //checks Nested if...else
  // outer if condition
  if (number != 0) {
        
    // inner if condition
    if (number > 0) {
      cout << "The number is positive." << endl;
    }
    // inner else condition
    else {
      cout << "The number is negative." << endl;
    }  
  }
  // outer else condition
  else {
    cout << "The number is 0 and it is neither positive nor negative." << endl;
  }

  cout << "This line is always printed." << endl;
  
  return 0;
}
