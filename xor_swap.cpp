#include<bits/stdc++.h>
using namespace std;

int main(){
	int a = 5, b = 3;

	a = a ^ b;

	b = b ^ a;
	// b ^ (a ^ b) = a

	a = a ^ b;
	// (a ^ b) ^ a = b

	cout << "a = " << a <<" " << "b = " << b;
}