#include<iostream>
using namespace std;
int fibo(int);

int main(){
    int n;
    cout<<"enter a number you want to show element on that position in fibonacci series"<<endl;
    cin>>n;
    cout<<"The "<<n<<" th term of fibonacci series is:"<<fibo(n);
    return 0;
}

int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    else{
        return (fibo(n-2)+fibo(n-1));
    }
}