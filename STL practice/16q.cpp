//Merge two sorted arrays
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;

    cin >> m;
    vector<int> b(m);
    for(int &x : b) cin >> x;

    vector<int> c;
    c.resize(n + m);

    merge(a.begin(), a.end(), b.begin(), b.end(), c.begin());

    for(int x : c) cout << x << " ";
    return 0;

}