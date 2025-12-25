#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >> n;
   int original = n;
   int ReverseNumber = 0;
   while (n > 0){
      int LastDigit = n%10;
      ReverseNumber = (ReverseNumber * 10) + LastDigit;
      n = n/10;
   }
   if(ReverseNumber == original){
      cout << "Entered number is a Palindrome";

   }
   else{
    cout << "Entered number is not a Palindrome";
   }
  return 0;
}