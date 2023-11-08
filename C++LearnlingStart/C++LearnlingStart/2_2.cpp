//2_2

#include <iostream>
using namespace std;

int convertTest(int l);

int main(){
	int l;
	cout << "Please enter a number of long: ";
	cin >> l;
	int m = convertTest(l);
	cout << l << " longs = " << m << " ma";
	return 0;
}

int convertTest(int l){
	return 220 * l;
}
