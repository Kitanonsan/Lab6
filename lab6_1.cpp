#include<iostream>
using namespace std;

int main(){
    int number[1000] ={};
    int j = 0;

    cout << "Enter an integer: ";
    cin >> number[j];
    while (number[j] != 0){
        j++;
        cout << "Enter an integer: ";
        cin >> number[j];

    }
    int odd = 0,Even = 0;
    int k=0;
    while(number[k] != 0){
        if(number[k]%2 == 0){
            Even++;
        }
        else {
            odd++;
        }
        k++;
    }
    cout << "#Even numbers = " << Even << endl;

    cout << "#Odd numbers = " << odd;
    return 0;
}
