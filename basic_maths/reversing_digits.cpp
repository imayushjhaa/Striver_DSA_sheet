#include<iostream>
using namespace std;

int reverseDigit(int n){

    int rev_num = 0;
    while(n>0){
        int a = n % 10;
        rev_num = (rev_num * 10) + a;   // core logic 
        n /= 10;   // n = n / 10   
    }
    return rev_num;
}

int main (){
    int num;
    cin>>num;
    
    cout<<"Reversed number "<<reverseDigit(num);
 
    return 0;
}