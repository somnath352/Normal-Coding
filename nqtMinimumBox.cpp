#include<bits/stdc++.h>
using namespace std;

int minimumBox(int arr[], int n, int k) {
	int i = 0, j = n-1, cnt = 0;
	while(i <= j) {
		cnt++;
		if(arr[i] + arr[j] <= k)
			i++;
		j--;
	}
	return cnt;
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i<n;i++) {
		cin >> arr[i];
	}

	int k;
	cin >> k;
	cout << minimumBox(arr, n, k);
	return 0;
}