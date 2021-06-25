// Omar Mehmood CS 1200 Temperature Calculator Homework 2/8/2021
#include <iostream>
using namespace std;

int main ()
{
	int d, rt;
	
	cout << "WELCOME TO TEMPERATURE CALCULATOR\n------------------------------------------------------\n";
	cout << "Please insert how many days you would like to track: ";
	cin >> d;
	int temp[d];
	rt = 0;
	for (int i=0 ; i < d ; i++ )
	{cout << "\nNow please insert the temperature on day " << (i+1) << ": ";
	cin >> temp[i];
	rt = rt + temp[i];
	}
	cout << "\n----------------------------------------------------\nThe average temperature of the following days is: " << rt/d;
	int low = temp[0], high = temp[0];
	for (int c = 0 ; c < d ; c++ ) {
		if (temp [c] < low) low = temp[c];
		if (temp [c] > high) high = temp[c];  
	}
	 cout << "\n------------------------------------------------\nLowest Temperature out of the following days: " << low;
	 cout << "\n-------------------------------------------------\nHighest temperature out of the following days: " << high;
	 
	 cout << "\n\n\n\n\n";
	return 0;
}
