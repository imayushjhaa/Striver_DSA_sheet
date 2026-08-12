#include<iostream>
using namespace std;

void allDivisors(int n){
    for(int i=1; i<n+1; i++){
        if(n % i == 0){
            cout<<i<<endl;
        }
    }
}

int main (){
    int num;
    cin>>num;
    
    allDivisors(num);
 
    return 0;
}


