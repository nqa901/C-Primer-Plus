//3_7

#include <iostream>

using namespace std;

const double KM_to_MILES = 62.14;
const double GALLON_to_LITRE = 3.785;

int main(){
	double EU_coms,US_coms;
	cout << "Enter EU fuel consumption: ";
	cin >> EU_coms;
	
	US_coms = GALLON_to_LITRE * KM_to_MILES / EU_coms;
	
	cout << "The US fuel consumption is ";
	cout << US_coms << endl;
	
	return 0;
}



