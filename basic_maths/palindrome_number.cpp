#include<iostream>
using namespace std;

void palindrome_check(int n){

    int rev_num = 0;
    int duplicate = n;  // storing duplicate value of num
    while(n>0){
        int a = n % 10;
        rev_num = (rev_num * 10) + a;   
        n /= 10;   // n = n / 10   
    }

    if(rev_num == duplicate){   
        cout<<"True";
    }
    else {
        cout<<"False";
    }
}

int main (){
    int num;
    cin>>num;
    
    palindrome_check(num);
 
    return 0;
} 