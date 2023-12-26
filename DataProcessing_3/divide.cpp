//3.11

#include <iostream>

using namespace std;

int main(){
	//设置浮点的定点计数法 
	cout.setf(ios_base::fixed,ios_base::floatfield);
	cout << "double constants: 1.e7 / 9.0 = ";
	cout << 1.e7 / 9.0 << endl;
	cout << "float constants: 1.e7f / 9.0f = ";
	cout << 1.e7f / 9.0f << endl;
	return 0;
}



