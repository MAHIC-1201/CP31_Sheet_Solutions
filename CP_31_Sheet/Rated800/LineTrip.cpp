#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, x;
        cin>>n>>x;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int mini=arr[0];
        for(int i=1;i<n;i++){
            int diff=arr[i]-arr[i-1];
            if(diff>mini)
            {
                mini=diff;
            }
        }
        cout<<max(mini, 2*(x-arr[n-1]))<<endl;
    }
    return 0;
}

// Approach: Calculate maximum of any 2 distances between current station and next gas station, for the last gas station, difference us 2*(x-last bus stop)