// reduce multiplications in taylor series

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
   static double s=1;
   if(n==0){
    return s;
   }
   else{
     s=1+x*s/n;
     return e(x,n-1);
   }
}

// total multiplications  O(n)