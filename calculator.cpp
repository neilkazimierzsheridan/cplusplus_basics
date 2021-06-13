#include <iostream>
using namespace std;

int main()

{
	float num1, num2;
	char operation;
	cout << "Calculator" << endl;
	// get the numbers from user
	cin >> num1 >> operation >> num2;
	
	// see which operation wanted e.g. +  with switch/case
	switch (operation)
	{
	case '-': cout << num1 << operation << num2 << "=" << num1-num2; break;
	case '+': cout << num1 << operation << num2 << "=" << num1+num2; break;
	case '/': cout << num1 << operation << num2 << "=" << num1/num2; break;
	case '*': cout << num1 << operation << num2 << "=" << num1*num2; break;
	case '%': 
		bool isNum1Int, isNum2Int;
		isNum1Int =((int)num1 == num1); // cast to int, is it the same as num1 user entered?
		isNum2Int =((int)num2 == num2);
		
		if(isNum1Int && isNum2Int) // AND true? Are they both whole numbers? If so cast to int
			cout << num1 << operation << num2 << "="  << (int)num1 % (int)num2 << endl;
		else
			cout << "We need whole numbers for this operation!" << endl;
		break;
	default: cout << "Please enter valid operation!" << endl; // didn't get -,+,/, *, % for 
	// operation!

	}



}
