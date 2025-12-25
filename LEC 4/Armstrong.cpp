#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >> n;
   int Original = n;
   int digits = 0;
   int Sum = 0;
   int temp = n;
   while(temp > 0){
    digits++;
    temp = temp/10;
   }
   temp = n;
   while (temp > 0){
       int LastDigit = temp%10;
       Sum = Sum + pow(LastDigit, digits);
       temp = temp/10;  
   }
   if(Sum == Original){
    cout << "it is an Armstrong number";
   }
   else{
    cout << "it is not an Armstrong number";
   }
   return 0;


}