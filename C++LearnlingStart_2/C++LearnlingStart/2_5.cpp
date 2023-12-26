//2_5

#include <iostream>
using namespace std;

float temConvert(float C);

int main(){
	float C;
	cout << "Please enter a Celsius value: ";
	cin >> C;
	float H = temConvert(C);
	cout << C << " degrees Celcius is " << H << " degrees Fahrenheit.\n";
	return 0;
}

float temConvert(float C){
	return 1.8 * C + 32.0;
}


