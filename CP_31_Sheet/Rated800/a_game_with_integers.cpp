#include<bits/stdc++.h>
using namespace std;
// if n is divisible by 3, then after vanya's turn n+1 or n-1 will never be divisible by 3, 
//eg if n=3, and vanya adds 1 , then n=4, then voya, will always subtract 1 so that n=3, and vanya has to play anothe move,
//all numers other than multiples of 3 can be transformed into multiples of 3.
//check if n%3==0, if yes, then voya will win
// else vanya will win
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        if(n%3==0) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
    return 0;
}

// Your code here