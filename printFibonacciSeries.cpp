#include<bits/stdc++.h>
using namespace std;

// 0 1 1 2 3 5 8 13

int main() {
    
    int n, first = 0, second = 1, next;
    cin >> n;  // 5
    for(int i = 0;i<n;i++) {  // 0 1 2 3 4 
        if(i <= 1)
            next = i;  // 0 1 
            
        else {
            next = first + second;  // 3
            first = second; // 2
            second = next;  // 3
        }
        
        cout << next <<" ";
    }
    return 0;
    
}