#include <iostream>
#include <string>
using namespace std;

bool ABCheck(string str)
{
	for(int i = 0; i < str.size() - 4; i++)
		if(str[i] == 'a' && str[i + 4] == 'b' && str[i + 1] != 'b' && str[i + 2] != 'b' && str[i + 3] != 'b' ||
		   str[i] == 'b' && str[i + 4] == 'a' && str[i + 1] != 'a' && str[i + 2] != 'a' && str[i + 3] != 'a')
				return true;
	return false;
}

int main(){

	string str;

	cout << "Enter a string: ";
	while(getline(std::cin, str)){
		cout << std::boolalpha << ABCheck(str) << endl;
		cout << "\nEnter a string: ";
	}

	cin.sync();
	cin.get();
	return 0;
}
