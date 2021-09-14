#include<bits/stdc++.h>
using namespace std;

void fun(string s1, string s2) {

	// size_t represent size of an object
	size_t found = s1.find(s2);
	if(found != string::npos) {   // until the end of the string 
		cout << "string found at: " << found << endl;
	}
	else {
		cout << "not found";
	}
}

int main() {
	string s1 = "developer";
	string s2 = "per";
	fun(s1,s2);
	return 0;	
}