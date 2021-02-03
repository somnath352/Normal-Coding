#include<bits/stdc++.h>
using namespace std;
int main(){
        int n,rev=0,x;
        cout<<"Enter number: ";
        cin>>n;
        while(n!=0){
                x=n%10;
                rev=rev*10+x;
                n=n/10;        
        }
        cout<<"Reverse is "<<rev;
}