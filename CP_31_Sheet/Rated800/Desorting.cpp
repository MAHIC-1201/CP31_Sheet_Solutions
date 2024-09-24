#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int mini=INT_MAX;
        for(int i=0;i<n-1;i++){
            int diff=a[i+1]-a[i];
            mini=min(diff, mini);
        }
        // cout<<mini<<endl;
        if(mini==0) cout<<1<<endl;
        else if(mini<0) cout<<0<<endl;
        else cout<<(mini/2)+1<<endl;
    }
    return 0;
}

// Your code here