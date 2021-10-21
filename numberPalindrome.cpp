#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int n) {
	int ans = 0, rem, temp;
	temp = n;
	while(n > 0) {
		rem = n%10;  // 6 3 1
		n = n/10;    // 13 1 0
		ans = ans*10+rem; // 6 63 631
		
	}
	if(temp == ans)
		return 1;
	return 0;
}

int main() {
	int n;     // 136
	cin >> n;
	if(reverseNumber(n)) {
		cout << "YES";
	}
	else
		cout << "NO";
	return 0;
}
