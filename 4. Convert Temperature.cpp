#include <iostream>
using namespace std;

int main()
{
	float cel_temp, fah_temp;
	
	cout << "Insert the current temperature in Celsius: ";
	cin >> cel_temp;
	fah_temp = (cel_temp/5.0)*9 + 32;
	cout << "The current temperature in Fahrenheit is: " << fah_temp << endl;
}
