//5. check if a number exists in a vector

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int &x : a) cin >> x;

    int x ;
    cin >> x;

    auto it  = find(a.begin(), a.end(), x);
    if(it != a.end()) cout << "Found\n";
    else cout << "Not found\n";
    return 0;

}