#include<bits/stdc++.h>
using namespace std;
// In any subaaray of size = 1, the element occurs the maximum number of times in that subarray
//so if an element exists in the array, it will the majority element in subarray of size = 1 containing that element
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

