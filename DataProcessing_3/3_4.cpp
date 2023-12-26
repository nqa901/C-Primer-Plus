//3_4

#include <iostream>

using namespace std;

const int DAY = 24;
const int HOUR = 60;
const int MINUTE = 60;

int main(){
	int seconds;
	cout << "Enter the number of seconds: ";
	cin >> seconds;
	
	int day = seconds / (DAY * HOUR * MINUTE);
	int second = seconds % MINUTE;
	
	int minute = (seconds % (HOUR * MINUTE)) / MINUTE;
	int hour = (seconds / (HOUR * MINUTE)) % DAY;
	
	cout << seconds << " seconds = ";
	cout << day << " days, ";
	cout << hour << " hours, ";
	cout << minute << " minutes, ";
	cout << second << " seconds";
	
	return 0;
}



