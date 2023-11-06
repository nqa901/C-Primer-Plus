#include <iostream>
using namespace std;

//函数申明
//例题
void printWords();
void countCarrots(int carrots);
void cinCarrots(int carrots);
double sqrtX(double x);
void patience(int n);
int stonetolb(int sts);

//课后题
void printNameAddress();
int convertTest(int l);


int main() {
	//2.1
	//printWords();

	//2.2
	/*int carrots = 0;
	countCarrots(25);*/

	//2.3
	/*int carrots = 0;
	cout << "How many carrots do you have?\n";
	cin >> carrots;
	cinCarrots(carrots);*/

	//2.4
	/*double area;
	cout << "Please enter an area of a square: ";
	cin >> area;
	double l;
	l = sqrtX(area);
	cout << l << endl;*/

	//2.5
	/*patience(3);
	int n;
	cout << "Just pick a integer: ";
	cin >> n;
	patience(n);*/

	//2.6
	/*int sts;
	cout << "Enter the weight in stone: ";
	cin >> sts;
	int pounds = stonetolb(sts);
	cout << sts << " stone = " << pounds << " pounds\n";*/

	//2_1
	/*printNameAddress();*/

	//2_2
	int l;
	cin >> l;
	int m = convertTest(l);
	cout << m;


	return 0;
}