#include<bits/stdc++.h>
using namespace std;

void Pattern1(int n){
    for (int i =0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << "*" << " ";
        }
        cout << "\n";
    }
}
void Pattern2(int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<=i; j++){
            cout << "*" << " ";
        }
        cout << "\n";
    }
}
void Pattern3(int n){
    for (int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << "\n";
    }
}
void Pattern4(int n){
    for (int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << i << " ";
        }
        cout << "\n";
    }
}
void Pattern5(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i+1; j++){
            cout << "*" << " ";
        }
        cout << "\n";
    }
}
void Pattern6(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i+1; j++){
            cout << j << " ";
        }
        cout << "\n";
    }
}

void Pattern7(int n){
    for(int i=0; i<n; i++){
        for (int j=0; j<n-i-1; j++){
            cout << " "; 
        }
            for(int j=0; j<2*i+1; j++){
                cout << "*";
            }
                for(int j=0; j<n-i-1; j++){
                  cout << " ";
                }
            
        
        cout << "\n";
    }

}


int main(){
    int n;
    cin >> n;
    //Pattern1(n);
    //Pattern2(n);
    //Pattern3(n);
    //Pattern4(n);
    //Pattern5(n);
    //Pattern6(n);
    Pattern7(n);
    return 0;
} 