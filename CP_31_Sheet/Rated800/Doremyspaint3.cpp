#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        vector<int>arr(n);
        if(n<3){
            cout<<"Yes"<<endl;
            // return 0;
            continue;
        }
        for(int i=0;i<n;i++){
            cin>>arr[i];
            
        }
        sort(arr.begin(), arr.end());
        int flag=0;
        for(int i=0;i<(n/2);i++)
        {
            if(arr[i]!=arr[i+1]) {
                flag=1;
                break;
            }
        }
        for(int i=n/2+1;i<n-1;i++){
            if(arr[i]!=arr[i+1])
            {
                flag=1;
                break;
            }
        }
        if(flag==1) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    return 0;
}

// Your code here