#include<iostream>
using namespace std;
int ncr(int,int);

int main(){
    int n,r;
    cout<<"Enter values for n and r"<<endl;
    cin>>n>>r;
    cout<<"the "<<n<<"C"<<r<<" is: "<<ncr(n,r);
    return 0;
}

int ncr(int n,int r){
    if(r==0 || n==r){
        return 1;
    }
    else{
        return ncr(n-1,r-1)+ncr(n-1,r);
    }
}

// in this we used pascal traingle