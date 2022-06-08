// get the count of all set bits [TC - O(setBits)]
// find out the rightmost set bits(first set bit)
// find out the leftmost set bits(last set bit)

#include<bits/stdc++.h>
using namespace std;

int countSetBits(int n) {
    int cnt = 0;
    while(n) {
        n = n&(n-1);
        cnt++;
    }
    return cnt;
}

int getleftMostSetBits(int n) {
    return log2(n);
}

int getRightMostSetBits(int n) {
    return log2(n & (~(n-1)));
}

int main() {

    int n;
    cin >> n;
    // cout << countSetBits(n);
    // cout << getleftMostSetBits(n);
    cout << getRightMostSetBits(n);
}
