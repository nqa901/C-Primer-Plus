//4.6

//cin.get()

# include <iostream>
using namespace std;


int main(){
	
	cout << "What year was your house built?\n";
	
	int year;
	cin >> year;
	
	//cin 年份，回车键生成的换行符留在了输入队列中 
	cin.get();
	
	cout << "What is its street address?\n";
	char address[80];
	cin.getline(address,80);
	
	cout << "Year built: " << year << endl;
	cout << "Address: " << address << "\n";
	
	return 0;
} 
