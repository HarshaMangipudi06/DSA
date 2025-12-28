//find how many times a given number in the array is repeating
#include<iostream>
using namespace std;

/* int main(){
    int arr[50];
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    int input;
    cin >> input;
    int count = 0;
    for(int i=0; i<n; i++){
        if(input == arr[i]){
            count++;
        }       
    }
    cout << "the number of times " << input << " has repeated is " << count;

    return 0;
} */

int RepeatedTimes(int input, int arr[50]){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    cin >> input;
    int count = 0;
    for(int i=0; i<n; i++){
        if(input == arr[i]){
            count++;
        }
    }
    cout << "the number of times "<< input << " has repeated is "<< count;
    return count;           
}

int main(){
    int arr[50];
    int input;
    RepeatedTimes(input, &arr[50]);

    return 0;

}