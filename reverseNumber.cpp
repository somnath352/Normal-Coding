#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int n) {
	int ans = 0, rem;
	int temp = n;	
	while(n > 0) {
		rem = n%10;  // 6 3 1
		n = n/10;    // 13 1 0
		ans = ans*10+rem; // 6 63 631
		
	}
	
	if(temp == ans)
		return 1;
	else
		return 0;
}

int main() {
	int n;     // 136
	cin >> n;
	cout << reverseNumber(n);
	return 0;
}
