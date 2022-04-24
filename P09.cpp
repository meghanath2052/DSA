// Program to find all the Prime Factors.
// Written by Meghanath Reddy Chavva.

#include<bits/stdc++.h>
using namespace std;

bool Prime(int);

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"The Prime Factors are: ";
    for(int i=2;i<=n; i++){
        if(Prime(i) & n%i == 0){
            cout<<i<<" ";
        }
    }
return 0;
}

bool Prime(int n){
    int flag=0;
    if(n <= 1){
        return false;
    }
    for(int i=2; i<sqrt(n); i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
