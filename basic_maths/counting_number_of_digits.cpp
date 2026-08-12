#include<iostream>
using namespace std;

int countDigit(int n){
    int count = 0;
    int lastDigit;

    while(n>0){
        lastDigit = n % 10;
        count++;
        n /= 10;  // { n = n / 10 }
    }
    return count;
}

int main (){
    int num;
    cin>>num;

    int result = countDigit(num);
    cout<<"\nThe number of digits are: "<<result;
 
    return 0;
}