#include<iostream>
#include<cmath>
using namespace std;

void checkArms(int n){
    int duplicate = n;

    // finding no. of digits
    int count = 0;     // power = no. of digits
    while(n>0){         
        int a = n % 10;
        count ++;
        n /= 10;  // { n = n / 10 }
    }

    // re-fixing n:
    n = duplicate;
    int sum = 0;
    while(n>0){
        int a = n % 10;
        sum = sum + pow(a,count);  // core logic
        n /= 10;
    }

    if(sum == duplicate){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}
      
int main (){
    int num;
    cin>>num;

    checkArms(num);
 
    return 0;
}