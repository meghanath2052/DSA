// Program to find out the number of digits
// Written by Meghanath Reddy Chavva
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,digit;
    cout<<"Enter the number:";
    cin>>n;
    digit = ceil(log10f(n));
    cout<<"There are "<<digit<<" digits in the number "<<n<<endl;
    return 0;
}

// This gives us the Theta(1) time complexity where as if we iterate by diving with 10, we get Theta(n)