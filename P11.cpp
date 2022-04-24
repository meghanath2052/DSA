// sieve of eratosthenes (Print the prime numbers that are less than or equal to the given number)
// Written by Meghanath Reddy Chavva

#include<bits/stdc++.h>
using namespace std;

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

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    vector<int> isPrime(n+1,true);
    for(int i=2; i<sqrt(n); i++){
        if(Prime(i)){
            for(int j = i*i; j<=n; j=j+i){
                isPrime[j]=false;
            }
        }
    }
    for(int i = 2; i<=n; i++){
        if(isPrime[i]){
            cout<<i<<" ";
        }
    }
    return 0;
}