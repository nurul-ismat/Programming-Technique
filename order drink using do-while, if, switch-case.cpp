// order drink project using switch case
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	int number;
	float cost;
	char beverage;
	bool validBeverage;
	cout << fixed << showpoint << setprecision(2);
	do
	{
		cout << endl << endl;
		cout << "Welcome to My Coffee Shop! Our Offers are:" << endl;
		cout << "C: Coffee RM 7" << endl;
		cout << "J: Juice RM 4" << endl;
		cout << "S: Soda RM 2" << endl;
		cout << "T: Tea RM 1.5" << endl;
		cout << "M: Manager Special RM 2.99" << endl;
		cout << "X: Done with Placing Oder" << endl;
		cout << "What drink would you like? Select C, J, S, T, M (or X to finish with order)" << endl;
		cin >> beverage;
		switch (beverage)
		{
		case 'c':
		case 'C':
		case 'j':
		case 'J':
		case 's':
		case 'S':
		case 't':
		case 'T':
		case 'm':
		case 'M':validBeverage = true;
			break;
		default: validBeverage = false;
		}
		if (validBeverage)
		{
			// Fill in the code to begin a switch statement
			// that is controlled by beverage

			switch (beverage)
			{
			case 'c':
			case 'C': cost = cost + 7;
				cout << "Thank you, You have ordered coffee as your drink" << endl;
				break;
		
			case 'j':
			case 'J': cost = cost + 4;
				cout << "The total cost is RM " << endl;
				break;
				
			case 't':
			case 'T': cost = cost + 2;
				cout << "The total cost is RM " << endl;
				break;
				
			case 's':
			case 'S': cost = cost + 1.5;
				cout << "The total cost is RM " << cost << endl;
				break;
			case 'm':
			case 'M': cost = cost + 2.99;
				cout << "The total cost is RM " << cost << endl;
				break;
			case 'x':
			case 'X': cout << " Please come again" << endl;
				break;
			
			default:
				cout << "Invalid selection" << endl;
				cout << " Try again please" << endl;
			}
		}
	} // Fill in the code to finish the do-while statement with the
	  // condition that beverage does not equal E or e.
	while ((beverage != 'x') || (beverage != 'X'));
	// Fill in the appropriate return statement
	return 0;

}

