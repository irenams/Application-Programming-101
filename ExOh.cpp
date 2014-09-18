#include <iostream>
#include <string>
using namespace std;

bool ExOh(string str)
{
	int balance = 0;
	for(int i = 0; i < str.size(); i++)
		if( str[i] == 'o' ) balance++ ;
		else if( str[i] == 'x' ) balance-- ;

	return ! balance;
}

int main(){

	string str;

	cout << "Enter a string: ";
	while(getline(std::cin, str)){
		cout << std::boolalpha << ExOh(str) << endl;
		cout << "\nEnter a string: ";
	}

	cin.sync();
	cin.get();
	return 0;
}
