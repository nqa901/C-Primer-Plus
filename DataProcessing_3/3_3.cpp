//3_3

#include <iostream>

using namespace std;

const float CONVERT = 60;

int main(){
	int degree,minute,second;
	double whole;
	
	cout << "Enter a latitude in degrees, minutes, and seconds:\n";
	
	cout << "First, enter the degrees:__\b\b";
	cin >> degree;
	
	cout << "Next, enter the minutes of arc:__\b\b";
	cin >> minute;
	
	cout << "Finally, enter the seconds of arc:__\b\b";
	cin >> second;
	
	whole = degree + minute / CONVERT + second / (CONVERT * CONVERT);
	
	cout << degree << " degrees, ";
	cout << minute << " minutes, ";
	cout << second << " seconds = ";
	cout << whole  << " degrees\n";
	
	return 0;
}



