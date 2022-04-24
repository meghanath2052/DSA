// Computing the power of a number.
// Written by Meghanath Reddy.

#include<bits/stdc++.h>
using namespace std;

int power(int x, int n){
    if(n==0){
        return 1;
    }
    int temp = power(x,n/2);
    temp = temp* temp;
    if(n%2==0)
        return temp;
    else
        return temp* x;
}
int main(){
    int x,n;
    cout<<"Enter the number:";
    cin>>x;
    cout<<"Enter the power:";
    cin>>n;
    cout<<x<<" raised to the power "<<n<<" is "<<power(x,n)<<endl;
    return 0;
}