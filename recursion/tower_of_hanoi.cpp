#include<iostream>
using namespace std;
int toh(int,int,int,int);

int main(){
    int n;
    cout<<"Enter number of disks"<<endl;
    cin>>n;
    toh(n,1,2,3);
    return 0;
}

int toh(int n,int A,int B,int C){
    if(n>0){
        toh(n-1,A,C,B);
        cout<<A<<"-> "<<C<<endl;
        toh(n-1,B,A,C);
    }
}

// tiime complexity O(2^n)