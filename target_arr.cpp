#include<iostream>
using namespace std;
int main(){
    int a[50],i,j,n,t;
    cout<<"Enter number of element: ";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Array element are: ";
    for(i=0;i<n;i++){
        cout<<" "<<a[i];
    }
    cout<<endl<<"Enter target element: ";
    cin>>t;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]+a[j]==t){
                cout<<" "<<a[i]<<" "<<a[j]<<endl;
            }
        }
    }

}