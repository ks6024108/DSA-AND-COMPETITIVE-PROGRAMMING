
// the last value of a will be considered for all the values of a so this only value add number of times or 
// we can say this is square of number using recursion

#include<iostream>
using namespace std;

int staticNum(int n){
    static int a=0;
    if(n>0){
        a++;
        return staticNum(n-1)+a;
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<staticNum(n);
    return 0;
}