// Program to find LCM of two numbers.
// Written by Meghanath Reddy Chavva.

#include<bits/stdc++.h>
using namespace std;

int LCM(int, int);
int GCD(int, int);

int main(){
    int a,b,lcm;
    cout<<"Enter the Numbers:";
    cin>>a>>b;
    lcm = LCM(a,b);
    cout<<"The LCM for "<<a<<" and "<<b<<" is "<<lcm<<endl;
    return 0;
}

int GCD(int num1,int num2){
    if(num1 % num2 ==0)
        return num2;
    else
        GCD(num2, num1%num2);
}
int LCM(int a, int b){ // Time Complexity is O(log(min(a,b)))
    int lcm;
    lcm = (a*b)/GCD(a,b);
    return lcm;
}

// int LCM(int a, int b){ // Time Complexity is O(a*b - max(a,b))
//     int res;
//     res = max(a,b);
//     while(true){
//         if(res%a == 0 & res%b == 0)
//             return res;
//         res++;
//     }
//     //return res;
// }
