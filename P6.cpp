// Program to find the GCD
// Written by Meghanath Reddy Chavva

#include<bits/stdc++.h>
using namespace std;
int GCD(int,int);
int main(){
    int a,b,gcd;
    cout<<"Enter the numbers:";
    cin>>a>>b;
    if(a>b)
        gcd = GCD(a,b);
    else
        gcd = GCD(b,a);
    cout<<"The GCD of "<<a<<" and "<<b<<" is "<<gcd<<endl;
    return 0;
}

int GCD(int num1,int num2){
    if(num1 % num2 ==0)
        return num2;
    else
        GCD(num2, num1%num2);
}

// int GCD(int num1, int num2){
//     int min;
//     if(num1>num2){
//         min = num2;
//     }
//     else{
//         min = num1;
//     }
//     while(min>0){
//         if(num1%min ==0 & num2%min ==0){
//             break;
//         }
//         min--;
//     }
//     return min;
// }

// Naive Time Complexity is O(min(a,b))