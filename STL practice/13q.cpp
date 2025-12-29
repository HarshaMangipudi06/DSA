#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);

    for(int &x : a) cin >> x;

    sort(a.begin(), a.end());
    cout << "Ascending : ";
    for(int x : a) cout << x << " ";
    cout << "\n";

    sort(a.rbegin(), a.rend());
    cout << "Descending : ";
    for(int x : a) cout << x << " ";

  return 0;
}