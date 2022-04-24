// Computing the power of a number using bits.
// Written by Meghanath Reddy.

#include<bits/stdc++.h>
using namespace std;

int power(int x, int n){
    int res=1;
    while(n>0){
        if(n%2!=0){
            res = res*x;
        }
        x=x*x;
        n=n/2;
    }
    return res;
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