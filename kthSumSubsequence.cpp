#include<bits/stdc++.h>
using namespace std;


// T.C => n * (2**n)
// S.C => O(n)

void seq(int ind, vector<int> &ds, int s, int sum, int arr[], int n) {
	if(ind == n) {
		if(s == sum) {
			for(auto &it : ds) cout << it << " ";
			cout << "\n";
		}
		return;

	}


	
	// Not pick the element in the subsequence
	seq(ind+1, ds, s, sum, arr, n);

	// pick the element in the subsequence
    ds.push_back(arr[ind]);
    s += arr[ind];

	seq(ind+1, ds, s, sum, arr, n);
	
	
	ds.pop_back();
	s -= arr[ind];
}

int main() {
	int arr[] = {1,2,1};
	int n = sizeof(arr) / sizeof(arr[0]);
	vector<int> ds;
	int sum = 2;
	seq(0, ds, 0, sum, arr, n);

	return 0;
}
