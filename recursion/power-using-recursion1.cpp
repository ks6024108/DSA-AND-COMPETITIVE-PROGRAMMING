#include<iostream>
using namespace std;
int power(int,int);

int main(){
    int base,pow;
    cout<<"Enter values for base and power"<<endl;
    cin>>base>>pow;
    cout<<"the "<<base<<" power "<<pow<<" is "<<power(base,pow);
    return 0;
}

int power(int base,int pow){
    if(pow==0){
        return 1;
    }
    else{
        return base*(power(base,pow-1)); 
    }
}

// time and space complexity O(n)