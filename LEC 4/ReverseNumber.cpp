#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ReverseNum = 0;

    while(n>0){
        int LastDigit = n%10;
        ReverseNum = (ReverseNum * 10) + LastDigit;
        n = n/10;
    }
    cout << ReverseNum;




}
