// first take input as string and then
// generate all the substring and then convert
// it to integer and add all of those integer 
// return the sum 

#include <bits/stdc++.h>
using namespace std;

int getSum(string s) {
	stringstream ans(s);
	int x = 0;
	ans >> x;
	return x;
}

void subString(string s, int n) {
	
	int sum = 0;
	for(int i = 0;i<n;i++) {
		for(int j = 1;j<=n-i;j++) {
			sum += getSum(s.substr(i, j));
		}
	}
	cout << sum << "\n";
}
int main() {
	IOS;

	string s;
	cin >> s;
	int n = s.size();
	subString(s, n);

	return 0;
	

}
