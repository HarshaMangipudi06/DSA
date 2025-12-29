//2.Remove duplicates from an array using set
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;

    set<int> s(a.begin(), a.end());

    for(int x : s){
        cout << x << " ";
    }
    return 0;
}