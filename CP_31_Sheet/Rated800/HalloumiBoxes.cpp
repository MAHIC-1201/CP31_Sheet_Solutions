#include<bits/stdc++.h>
using namespace std;
bool is_sorted(vector<long long>&arr){
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]>arr[i+1]) return false;
    }
    return true;
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(k==1)
        {
            if(is_sorted(v))
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}

// Your code here