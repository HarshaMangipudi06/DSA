//print N to 1 using recursion
#include<bits/stdc++.h>
using namespace std;

void f1(int i, int n){
    if(i < 1){
        return;
    }
    cout << i << "\n";
    f1(i-1, n);
 
}

int main(){
    int n;
    cin >> n;
    f1(n, n);

}