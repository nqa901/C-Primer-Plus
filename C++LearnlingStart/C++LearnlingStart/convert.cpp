//2.6

#include <iostream>
using namespace std;

int stonetolb(int sts);

int main() {
	int sts;
	cout << "Enter the weight in stone: ";
	cin >> sts;
	int pounds = stonetolb(sts);
	cout << sts << " stone = " << pounds << " pounds\n";
	return 0;
}

int stonetolb(int sts){
	return 14 * sts;
}
