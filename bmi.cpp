#include <iostream>

using namespace std;

int main()

{

	// weight / (height * height)
	// underweight <18.5
	// overweight >25
	// healthy weight 18.5-24.9 yes I know BMI sucks

	// declare variables
	float weight, height, bmi;
	// cout to enter them
	cout <<  "Enter Weight(kg) and height(m): ";
	cin >> weight >> height; // cin to get them
	
	// bmi formula
	bmi = weight / (height * height);
	// if and else if
	if (bmi<18.5)
		cout << "Underweight!" << endl;
	else if (bmi > 25)
		cout << "Overweight!" << endl;
	else
		cout << "Normal weight" << endl;

	cout << "Your BMI is: " << bmi;
	
	return 0;




}

