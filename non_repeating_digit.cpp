#include<bits/stdc++.h>
using namespace std;

int countRepeat(int n) {
	int res = 0;
	int freq[10] = {0};
	while(n != 0) {
		int rem = n%10; // 1 1
		freq[rem]++;  // freq[1] = 2
		n /= 10;   // 0
	}
	for(int i = 0;i<10;i++) {
		if(freq[i] > 1) {
			res++;
		}
	}
	return res;
}

int main() {
	int a, b;
	cin >> a >> b;
	int cnt = 0;
	for(int i = a;i<=b;i++) {
		int ans = countRepeat(i);
		if(ans > 0) {
			continue;
		}
		else {
			cnt++;
		}
	}
	cout << cnt << "\n";
}
