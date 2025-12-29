#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);

    for(int &x : a) cin >> x;

    map<int,int> freq;
    for (int x : a) freq[x]++;
    
    for(auto &p : freq){
        cout << p.first << "->" << p.second << "\n";
    }
    return 0;

}