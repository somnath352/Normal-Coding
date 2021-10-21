#include <iostream>
using namespace std;

string isPalindrome(string str) {
	int i = 0, j = str.size()-1;
	while(i < j) {
		if(str[i++] == str[j--])
			return "YES";
	}
	return "NO";
}

int main() {
	string str;
	cin >> str;
	cout << isPalindrome(str) << endl;
}
