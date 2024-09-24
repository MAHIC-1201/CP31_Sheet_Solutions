#include<bits/stdc++.h>
using namespace std;
// In this question, we bascially check, if any 3 consecutive cells are empty
// If 3 consecutive cells are emptty, then they can be filled in 2 moves
// 000 ->100->101
// the middle cell fills on its own
// also, if there exists 3 conscutive empty cells we can always remove water from the middle cell and place it into another cell without making move 1
// if there are not 3 consecutive empty cells, all cells have to be filled individually
// count the number of empty cells, check if there are 3 consecituve empty cells
// if yes answer=2, else answer=number of empty cells
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int empty=0;
        bool flag=false;
        for(int i=0;i<n;i++){
            if(s[i]=='.') empty++;
        }
        // cout<<empty<<endl;
        for(int i=0;i<n-2;i++)
        {
            if(s[i]=='.' && s[i]==s[i+1] && s[i+1]==s[i+2]){
                flag=true;
                break;
            }
        }
        // cout<<flag;
        if(flag) cout<<2<<endl;
        else cout<<empty<<endl;
    }
    return 0;
}

// Your code here