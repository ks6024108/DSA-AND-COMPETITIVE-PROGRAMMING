//   Types of recursion
// 1.tail recursion   :- no descending phase
// 2. head recursion   :-  no ascending phase
// 3. tree recursion   
// 4. indirect recursion
// 5. nested recursion


// 1.Tail recursion  : can easily converted into loop   O(n) tc and sc
#include<iostream>
using namespace std;

int fun(int n){
if(n>0){
    cout<<n<<" ";
   return fun(n-2);   // last line
}
return 0;
}

int main(){
    int n=20;
    fun(n);
    return 0;
}

// 2. Head Recursion  O(n)
#include<iostream>
using namespace std;

int fun(int n){
if(n>0){
   return fun(n-2);  // first line
    cout<<n<<" ";
}
return 0;
}

int main(){
    int n=20;
    fun(n);
    return 0;
}

// 3. Tree recursion    time complexity:- O(2^n)
// in it we call same function more than one  line 60 and 61
 #include<iostream>
using namespace std;

int fun(int n){
if(n>0){
    cout<<n<<" ";
   return fun(n-2);   // last line
}
return 0;
}

int main(){
    int n=20;
    fun(n);
    fun(n);
    return 0;
}



// 4. Indirect recursion
// two function calling each other by specific conditions
#include<iostream>
using namespace std;
int fun1(int);
int fun2(int);

int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    fun1(n);
    return 0;
}

int fun1(int n){
    if(n>0){
        cout<<n<<" ";
         return fun2(n-1);
    }
    return 0;
}

int fun2(int n){
    if(n>1){
        cout<<n<<" ";
        return fun1(n/2);
    }
    return 0;
}



// 5. nested recursion   :- function call within function call
#include<iostream>
using namespace std;

int func(int n){
    if(n>100){
        return n-10;
    }
    else{
        return func(func(n+11));
    }
    return 0;
} 
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    cout<<func(n);
    return 0;
}