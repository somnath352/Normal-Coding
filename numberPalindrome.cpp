#include<bits/stdc++.h>
using namespace std;

int palindrome(int n) {
	int ans = 0, rem;
	// temp = n;
	while(n > 0) {
		rem = n%10;  // 6 3 1
		n = n/10;    // 13 1 0
		ans = ans*10+rem; // 6 63 631
		
	}
	return ans;
}

int main() {
	int n;     // 136
	cin >> n;
	if(palindrome(n)) {
		cout << "YES";
	}
	else
		cout << "NO";
	return 0;
}
