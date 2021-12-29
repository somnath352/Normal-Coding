#include<bits/stdc++.h>
using namespace std;


// T.C => n * (2**n)
// S.C => O(n)

void seq(int ind, vector<int> &ds, int arr[], int n) {
	if(ind == n) {
		for(auto &it : ds) {
			cout << it << " ";
		}

		if(ds.size() == 0) {
			cout << "{}";
		}
		cout << "\n";
		return;

	}


	
	// Not pick the element in the subsequence
	seq(ind+1, ds, arr, n);

	// pick the element in the subsequence
    ds.push_back(arr[ind]);
	seq(ind+1, ds, arr, n);
	ds.pop_back();
	
}

int main() {
	int arr[] = {2,1,3};
	int n = sizeof(arr) / sizeof(arr[0]);
	vector<int> ds;
	seq(0, ds, arr, n);

	return 0;
}
