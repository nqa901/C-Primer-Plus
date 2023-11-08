//2_6

#include <iostream>
using namespace std;

double lightYearConvert(double lightYear);

int main(){
	double lightYear;
	cout << "Enter the number of light years: ";
	cin >> lightYear;
	double au = lightYearConvert(lightYear);
	cout << lightYear << " light years = " << au << " astronomical units.\n";
	return 0;
}

double lightYearConvert(double lightYear){
	return 63240 * lightYear;
}


