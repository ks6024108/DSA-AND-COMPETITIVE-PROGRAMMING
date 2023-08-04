#include<iostream>
using namespace std;
long fact(int);

int main(){
    int n;
    cout<<"Enter number for finding factorial: ";
    cin>>n;
    cout<<"The factorial of "<<n<<" is: "<<fact(n);
    return 0;
}

long fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

//Time and space complexity  O(n)