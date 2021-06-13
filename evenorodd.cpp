#include <iostream>
using namespace std;

int main()
{

	// get integer from user
	// is it even or odd? So we use the modulator operator
	// e.g. cout << 2 % 2; odd number get remainder, evens don't	
	int number;
	cout <<"Please enter a whole number: ";
	cin >> number;
	if(number %2 == 0)
	{
		cout << "You have entered even number" << endl;
	}
	else
	{
		cout << "You have entered odd number" << endl;
	}
	
  




}
