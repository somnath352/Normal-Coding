#include<bits/stdc++.h>
using namespace std;

int prime(int n) {
    int flag = 0;
    for(int i = 2;i<=n/2;i++) {
        if(n%i == 0)
            flag = 1;
            break;
    }
    if(flag == 0)
        return 1;
    else
        return 0;
}

int main() {
    int n;
    cin >> n;
    if(prime(n)) 
        cout << "Prime";
    else
        cout << "Not prime";
    
}
