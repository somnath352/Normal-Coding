#include<bits/stdc++.h>
using namespace std;

void count0_1(string s) {

	int counter;
	if(s[0] == '1') {
		for(int i = s.size()-1;i>=0;i--) {
			if(s[i] == '1') {
				counter = i;
				break;
			}
		}

		int cnt1 = 0;
		for(int i = 1;i<counter;i++) {
			cnt1++;
		}
		cout << cnt1;
	}
	else if(s[0] == '0') {
		for(int i = s.size()-1;i>=0;i--) {
			if(s[i] == '0') {
				counter = i;
				break;
			}
		}

		int cnt0 = 0;
		for(int i = 1;i<counter;i++) {
			cnt0++;
		}
		cout << cnt0;
	}
}

int main() {
	string s;
	cin >> s;
	count0_1(s);
	return 0;
}