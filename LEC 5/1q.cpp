// print Name n times using recursion 
#include <iostream>
using namespace std;

void f1(int i, int n){
    if(i > n){
        return;
    }
    cout << "Harsha" << "\n";
    f1(i+1, n);

}


int main(){
    int n;
    cin >> n;
    f1(1, n);

}