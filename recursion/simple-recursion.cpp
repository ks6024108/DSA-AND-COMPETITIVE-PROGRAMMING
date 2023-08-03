#include<iostream>
using namespace std;

int fun(int n){
if(n>0){
    cout<<n<<" ";
   return fun(n-2);
}
return 0;
}

int main(){
    int n=20;
    fun(n);
    return 0;
}
