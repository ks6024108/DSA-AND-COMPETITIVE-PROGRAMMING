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


int power(int m,int n){
    if(n==0){
        return 1;
    }
    if(n%2==0){
        return power(m*m,n/2);
    }
    else{
        return power(m*m,(n-1)/2)*m;
    }
}

// The Multipplication will be reduced than the first one  (efficient)