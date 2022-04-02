// Program to find whether the given number is palindrome or not
// Written by Meghanath Reddy Chavva
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,rev=0,temp;
    cout<<"Enter the number:";
    cin>>n;
    temp = n;
    while(n>0){
        rev = rev*10 + n%10;
        n = n / 10;
    }
    if(temp==rev){
        cout<<"The given number is a palindrome"<<endl;
    }
    else{
        cout<<"The given number is not a palindrome"<<endl;
    }
    return 0;
}