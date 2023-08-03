
//   sum of n natural numbers using recursion

#include<iostream>
using namespace std;

int sum(int n){
    if(n>0){
        return sum(n-1)+n;
    }
    return 0;
}

int main(){
    int n;
    cout<<"enter number for which you want to sum"<<endl;
    cin>>n;
   cout<<"The sum is:"<<sum(n);
    return 0;
}