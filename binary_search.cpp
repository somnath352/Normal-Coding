//Binary Search Algorithm (O(log n)) base 2
 
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}
	int search;
	cin >> search;

	int low = 0, high = n-1;
	int mid;
	while(high - low > 1){
		mid = (high + low)/2;
		if(a[mid] < search){
			low = mid + 1;
		}
		else{
			high = mid;
		}
	}
	if(a[low] == search){
		cout << low << endl;
	}
	else if(a[high] == search){
		cout << high << endl;
	}
	else{
		cout << "Not Found";
	}
}