#include<bits/stdc++.h>
using namespace std;
// calcuate the minimum difference between any 2 elements in the array, this is because it will require minimum number of moves to make a[i-1]>a[i]
// let this minimum difference = x, i.e. a[i]-a[i-1]=x
// We need to calculate after how many moves does a[i-1]>a[i]
// Lets say it happens after k moves that a[i]-a[i-1]<=0
// at that point a[i-1]=a[i-1]+k
// a[i]=a[i]-k
//a[i]-a[i-1]-2k<=0
//x-2k<=0
//k>=x/2
//k=x/2+1
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

