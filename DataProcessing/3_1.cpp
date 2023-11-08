//3_1

#include <iostream>

using namespace std;

const int inch_to_foot = 12;

int main(){
	int h;
	cout << "Please enter your height in inch: __\b\b";
	cin >> h;
	int foot = h / inch_to_foot;
	int inch = h % inch_to_foot;
	cout << h << " inches = ";
	cout << foot << " foots and ";
	cout << inch << " inches.\n";
	return 0;
}



