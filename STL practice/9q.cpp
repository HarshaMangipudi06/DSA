//3. Find largest and smallest element
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);

    for(int &x : a) cin >> x;

    auto mn = *min_element(a.begin(), a.end());
    auto mx = *max_element(a.begin(), a.end());

    cout << "Min: " << mn << "\n";
    cout << "Max: " << mx << "\n";
    return 0;

}