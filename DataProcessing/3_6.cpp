//3_6

#include <iostream>

using namespace std;


int main(){
	double mile,gallon;
	cout << "Enter the number of miles and gallons used: ";
	cin >> mile >> gallon;
	
	double per = mile / gallon;
	cout << "The car can run ";
	cout << per;
	cout << " miles on a gallon of gas.";
	
	return 0;
}



