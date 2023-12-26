//3_2

#include <iostream>

using namespace std;

const int inch_to_foot = 12;
const double inch_to_meter = 0.0254;
const double pound_to_Kg = 2.2;

int main(){
	int foot,inch,h_inch;
	double h_meter;
	
	int w_pound;
	double w_Kg;
	
	double BMI;
	
	cout << "Please enter your height in foot:_\b";
	cin >> foot;
	cout << "Please enter your height in inch:__\b\b";
	cin >> inch;
	cout << "Please enter your weight in pound:___\b\b\b";
	cin >> w_pound;
	
	h_inch = inch_to_foot * foot + inch;
	h_meter = inch_to_meter * h_inch;
	
	w_Kg = w_pound / pound_to_Kg;
	
	BMI = w_Kg / (h_meter * h_meter);
	
	cout.setf(ios_base::fixed,ios_base::floatfield);
	
	cout << "The BMI of that man is: " << BMI << endl;
	return 0;
}



