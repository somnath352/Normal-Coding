#include<bits/stdc++.h>
using namespace std;

void seq(int ind, vector<int>& ds, int s, int sum, int n, int arr[]) {
	if(ind==n) {
		if(s==sum) {
			for(auto &it: ds) {
				cout << it <<" ";
			}
			cout << "\n";
		}
		return;
	}
	
	// pick up the element
	ds.push_back(arr[ind]);
	s += arr[ind];
	seq(ind+1, ds, s, sum, n, arr);
	ds.pop_back();
	s -= arr[ind];

	// not pickup the element
	seq(ind+1, ds, s, sum, n, arr);
}

int main() {
	int arr[] = {1,2,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	int sum = 2;
	vector<int> ds;
	seq(0, ds, 0, sum, n, arr);
}
