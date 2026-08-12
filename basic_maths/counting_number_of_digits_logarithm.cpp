#include<iostream>
#include<cmath>
using namespace std;

int countDigit(int n){
    int count = (int)(log10(n) + 1);
    return count;
}

int main (){
    int num;
    cin>>num;

    int result = countDigit(num);
    cout<<"\nThe number of digits are: "<<result;
 
    return 0;
}