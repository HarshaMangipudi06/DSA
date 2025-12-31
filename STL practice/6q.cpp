#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    
    for(int &x : a) cin >> x;

    set<int>s(a.begin(), a.end()); //sorts and also removes the dulpicates in the given array

    for(int x : s){
        cout << x << " ";
    }
return 0;
}


