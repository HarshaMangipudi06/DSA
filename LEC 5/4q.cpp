//sum of first N numbers using PARAMETERIZED recursion
#include<bits/stdc++.h>
using namespace std;

void f1(int i, int n, int &sum){
    if(i > n){
        return;
    }
    sum = sum + i;
    f1(i+1, n, sum);
}

int main(){
    int n;
    cin >> n;
    int sum = 0;
    f1 (1, n, sum);
    cout << sum;
    return 0;

}