// All divisors of a number
// Written by Meghanath Reddy.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter the number:";
    cin>>n;
    for (i=1; i<sqrt(n); i++){
        if (n%i == 0){
            cout<<i<<" ";
        }
    }
    for(; i>=1; i--){
        if (n%i == 0){
            cout<<n/i<<" ";
        }
    }
    return 0;
}

// To sort the output list, use some array to store the second factor everytime and print them in reverse at the last.