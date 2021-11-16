#include<bits/stdc++.h>
using namespace std;


// T.c -> O(N^3)
// Formula -> (n*(n+1)) / 2

void generateAllSubarray(int arr[], int n) {
	for(int i = 0;i<n;i++) {
		for(int j = i;j<n;j++) {
			for(int k = i;k<=j;k++) {
				cout << arr[k] << " ";
			}
			cout << endl;
		}
	}
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i<n;i++) {
		cin >> arr[i];
	}
	generateAllSubarray(arr,n);
	return 0;
}

