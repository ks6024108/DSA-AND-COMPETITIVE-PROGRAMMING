#include<iostream>
using namespace std;
double e(double ,double);

int main(){
    double x,n;
    cout<<"the values of x and n:"<<endl;
    cin>>x>>n;
    cout<<"the e^"<<x<<" until "<<n <<" terms value is: "<<e(x,n);
    return 0;
}

double e(double x,double n){
    static double p=1,f=1;
    double r;
    if(n==0){
        return 1;
    }
    else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}

// total multiplications  O(n^2)