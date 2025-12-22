#include<bits/stdc++.h>
using namespace std;
//prints if you're adult or not

/* int main() {
    int age;
    cin >> age;
    
    if (age >=18){
        cout << "you are an adult\n";
    }
    else{
        cout << "you are not an adult\n";
    }

} */

int main(){
     int marks ;
     cin >> marks;

     if (marks >=80 && marks <=100){
        cout << "A\n";
     }
     else if (marks >=60 && marks <=79){
        cout << "B\n";
     }
     else if (marks >=50 && marks <=59){
        cout << "C\n";
     }
     else if (marks >=45 && marks <=49){
        cout << "D\n";
     }
     else if (marks >=25 && marks <=44){
        cout << "E\n";
     }
     else if (marks <25){
        cout << "F\n";
     }
     else {
        cout << "please enter valid marks\n";
     }
}