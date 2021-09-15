#include<bits/stdc++.h>
using namespace std;

void print(int n, int arr[]) {
	int old_val = 20, new_val = 55;

	cout << "before replace: ";
	for(int i = 0;i<n;i++) {
		cout << arr[i] << endl;
	}

	replace(arr, arr+n, old_val, new_val);

	cout << "After replace: " << endl;
	for(int i = 0;i<n;i++) {
		cout << arr[i] << endl;
	}
}

int main() {
	int arr[] = {10,20,30,40,50};
	int n = sizeof(arr)/ sizeof(arr[0]);
	print(n, arr);
	return 0;
}