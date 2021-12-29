#include<bits/stdc++.h>
using namespace std;


// T.C => n * (2**n)
// S.C => O(n)

int seq(int ind, int s, int sum, int arr[], int n) {
	// condition is not satisfied
	// strictly if arr is contains only positive integer
	if(s > sum) return 0;
	if(ind == n) {
		// condition satisfied
		if(s == sum) return 1;

		// not satisfied
		else return 0;	

	}


	
	// Not pick the element in the subsequence
	int l = seq(ind+1, s, sum, arr, n);


	// pick the element in the subsequence
    s += arr[ind];

	int r = seq(ind+1, s, sum, arr, n);

	s -= arr[ind];

	return l+r;
}

int main() {
	int arr[] = {1,2,1};
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 2;
	cout << seq(0, 0, sum, arr, n);

	return 0;
}
