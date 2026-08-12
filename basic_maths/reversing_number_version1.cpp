#include<iostream>
using namespace std;

void reverseDigit(int n){
    int lastDigit;
    while(n>0){
        lastDigit = n % 10;
        cout<<lastDigit;
        n /= 10;  // { n = n / 10 }
    }
}

int main (){
    int num;
    cin>>num;
    
    cout<<"Reversed number ";
    reverseDigit(num);
 
    return 0;
}