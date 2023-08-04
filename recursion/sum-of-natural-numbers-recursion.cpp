#include<iostream>
using namespace std;
int naturalSum(int);

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<"The sum Till "<<n<<" is:"<<naturalSum(n);
    return 0;
}

int naturalSum(int n){
    if(n==0){
        return 0;
    }
    else{
       return  n+naturalSum(n-1);
    }
}


// time and space complexity  O(n)