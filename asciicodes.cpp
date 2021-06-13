#include <iostream>
using namespace std;

int main()
{

	char c1, c2, c3, c4, c5;
	cout<< "Enter 5 letters: ";
	cin>> c1 >> c2 >> c3 >> c4 >> c5;
	cout<<"ASCII message:" << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << 
	" " << int(c5) << "/n"; // so casting the chars to ints gives us their ascii codes

	int i1, i2, i3, i4, i5;
	cout<< "Enter 5 ASCII codes";
	cin>> i1 >> i2 >> i3 >> i4 >> i5;
	cout<<"ASCII Codes:" << char(i1) << " " << char(i2) << " " << char(i3) << " " << char(i4) <<
	" " << char(i5);
  




}
