#include<iostream>
using namespace std;

int main(){
    int num=1, even=0, odd=0;

    while(num != 0){
    cout << "Enter an integer: ";
    cin >> num;    
    if (num%2 == 0){
                even += 1;
            }
            else{
                odd += 1;
            }    
    }

    cout << "#Even numbers = " << even-1 << "\n";
    cout << "#Odd numbers = " << odd << "\n";

    return 0;
}