#include <iostream>
using namespace std;

string reverseString(string str) {
	int temp;
	int i = 0, j = str.size()-1;
	while(i <= j) {
		// swap(str[i++], str[j--]);
		temp = str[i];      // tmp = a
		str[i] = str[j];    // str[i] = b
		str[j] = temp;      // str[j] = a
		i++;j--;
	}
	return str;
}

int main() {
	string str;
	cin >> str;
	cout << reverseString(str) << endl;
}
