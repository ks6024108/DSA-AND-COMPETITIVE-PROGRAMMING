#include<iostream>
using namespace std;

int F[10];

int fibo(int n){
    if(n<=1){
        F[n]=n;
        return n;
    }
    else{
        if(F[n-2]==-1){
            F[n-2]=fibo(n-2);
        }
        if(F[n-1]==-1){
            F[n-1]=fibo(n-1);
        }
        return F[n-2]+F[n-1];   
    }
}

int main(){
    int n;
   
    for(int i=0;i<10;i++){
        F[i]=-1;
    }
    cout<<"enter a number you want to show element on that position in fibonacci series"<<endl;
    cin>>n;
    cout<<"The "<<n<<" th term of fibonacci series is:"<<fibo(n);
    return 0;
}

