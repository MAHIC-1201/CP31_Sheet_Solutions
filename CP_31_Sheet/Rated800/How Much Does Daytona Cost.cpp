#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        vector<int>arr(n);
        int flag=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==k){
                flag=1;
            }
        }
        if(flag==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
    return 0;
}

// every element occurs the maximum number of times in a subarray of size = 1, so if a given element k exists in the array, then it is most common in the subarray containaing that element of size=1, [k]