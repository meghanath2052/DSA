// Program to find out the trailing zeros in the factorial.
// Written by Meghanath Reddy Chavva

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,fact=1,zero=0;
    cout<<"Enter the number:";
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     fact *= i;
    // }
    // while(fact%10 == 0){
    //     zero++;
    //     fact = fact/10;
    // }

    for(int i=5; n/i>0; i*=5){
        zero+=n/i;
    }
    cout<<zero<<endl;
    return 0;
}

// Time complexity using just floor method is Theta(log5(n))
// Time complexity by finding the factorial is Theta(n).
// When we find the factorial, we may get the overflow for small value of n, so floor method is best.
