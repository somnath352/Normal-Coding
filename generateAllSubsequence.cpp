#include<bits/stdc++.h>
using namespace std;

void seq(int ind, vector<int>& ds, int n, int arr[]) {
	if(ind==n) {
		for(auto &it: ds) {
			cout << it <<" ";
		}
		if(ds.size() == 0) {
			cout << "{}";
		}
		cout << "\n";
		return;
	}
	
	// pick up the element
	ds.push_back(arr[ind]);
	seq(ind+1, ds, n, arr);
	ds.pop_back();

	// not pickup the element
	seq(ind+1, ds, n, arr);
}

int main() {
	int arr[] = {1,2,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	int sum = 2;
	vector<int> ds;
	seq(0, ds, n, arr);
}
