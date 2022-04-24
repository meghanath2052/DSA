// Program to check for prime
// Written by  Meghanath Reddy Chavva

#include<bits/stdc++.h>
using namespace std;

bool Prime(int);

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(Prime(n))
        cout<<"It is a Prime"<<endl;
    else
        cout<<"It is not a Prime"<<endl;
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
