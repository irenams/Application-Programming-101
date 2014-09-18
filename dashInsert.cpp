#include <iostream>
#include <string>
using namespace std;

string dashInsert(int num)
{
	string result;
	char digit;

	for(int n = num; n != 0; n /= 10){
		digit = '0' + n % 10;
		result = digit + result;
		if(n % 10 % 2 == 1 && n % 100 / 10 % 2 == 1)
			result = '-' + result;
	}

	return result;
}

int main(){

	int number;

	cout << "Enter a number: ";
	while(cin >> number){
		cout << dashInsert(number) << endl;
		cout << "\nEnter a number: ";
	}

	cin.sync();
	cin.get();
	return 0;
}
