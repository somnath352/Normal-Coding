#include<bits/stdc++.h>
using namespace std;

int seq(int ind, int s, int sum, int n, int arr[]) {
	if(s > sum) return 0;
	if(ind==n) {
		if(s==sum) return 1;
		else return 0;
	}
	
	// pick up the element
	s += arr[ind];
	int l = seq(ind+1, s, sum, n, arr);
	s -= arr[ind];

	// not pickup the element
	int r = seq(ind+1, s, sum, n, arr);

	return l+r;
}

int main() {
	int arr[] = {1,2,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	int sum = 2;
	cout << seq(0, 0, sum, n, arr);
}
