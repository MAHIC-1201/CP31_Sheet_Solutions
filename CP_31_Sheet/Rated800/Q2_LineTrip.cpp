#include<bits/stdc++.h>
using namespace std;
// In order to go from one gas station to another, fuel required= x2-x1, where x2=coordinate of next gas station, x1 = coordiante of current gas station
// we can always fuel at the next gas station for the next journey, thus we dont need to fuel extraaa at the first
// at the last gas station fuel required= (2*(x-a[n-1])), because we would need to go to the point x and come back to gas station at point index n-1
// Traverse thrugh the array and calculate the maximum distance between any 2 gas stations
// check if the maximum distance is greater than (2*(x-a[n-1])),
//return the answer
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

