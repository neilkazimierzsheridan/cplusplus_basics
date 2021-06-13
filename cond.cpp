// conditional operators with a guessing game

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()

{

	int hostUserNum, guestUserNum; // numbers for host and guest users
	cout << "Host user enter the number to be guessed: ";
	cin >> hostUserNum; // get the number cin
	system("clear"); // clear screen
	cout << "Guest user enter your guess: ";
	cin >> guestUserNum;
	// compare the numbers
	// with if else
	/* if(hostUserNum == guestUserNum)
		cout << "correct!";
	else 
		cout << "Incorrect!"; */
	
	// conditional operators
	(hostUserNum == guestUserNum)? cout << "Correct": cout << "Incorrect";




}
