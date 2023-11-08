//3_5

#include <iostream>

using namespace std;




int main(){
	long long p_World,p_US;
	cout << "Enter the world's population: ";
	cin >> p_World;
	
	cout << "Enter the population of the US: ";
	cin >> p_US;
	
	double percent = 100.0 * p_US / p_World;
	
	cout << "The population of the US is ";
	cout << percent << "% of the world population";
	
	return 0;
}



