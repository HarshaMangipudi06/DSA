#include<bits/stdc++.h>
using namespace std;
/*
void PrintName(string name1, string name2 , string name3){
    cout << "Names are " << name1 << " " << name2 << " " << name3 << "\n";
}

int main(){
    string name1, name2, name3;
    cin >> name1 >> name2 >> name3;
    PrintName(name1, name2, name3);
    return 0;


}
*/
//print Sum of two integers
/*void Sum(int a, int b){
    cout << "Sum is " <<a +b <<"\n";
}

int main(){
    int a, b;
    cin >> a >> b;
    Sum(a,b);
    return 0;
}*/
//pass by reference and pass by value
//pass by value
/* void doSomething(int a){
      cout << a <<"\n";
      a = a + 5;
      cout << a << "\n";
      a = a + 5;
      cout << a << "\n";
}
int main(){
    int a;
    cin >> a;
    doSomething(a);
    cout << a << "\n";
    return 0;
}*/
//pass by reference
void doSomething(int &a){  // if you add & it will take the address 
      cout << a <<"\n";
      a = a + 5;
      cout << a << "\n";
      a = a + 5;
      cout << a << "\n";
}
int main(){
    int a;
    cin >> a;
    doSomething(a);
    cout << a << "\n";
    return 0;
}