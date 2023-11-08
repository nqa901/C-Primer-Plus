//2_7

#include <iostream>
using namespace std;

void printHourMinute(int hour,int minute);

int main(){
	int hour,minute;
	cout << "Enter the number of hours: ";
	cin >> hour;
	cout << "Enter the number of minutes:";
	cin >> minute;
	printHourMinute(hour,minute);
	return 0;
}

void printHourMinute(int hour,int minute){
	cout << "Time: " << hour << ":" << minute;
}


