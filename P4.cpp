// Program to find the factorial of a number
// Written by Meghanath Reddy Chavva

#include<bits/stdc++.h>
using namespace std;

int facto(int);
int main(){
    int n,fact=1;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=1; i<=n;i++){
        fact *= i;
    }
    // fact = facto(n);
    cout<<"The factorial of "<<n<<" is "<<fact<<endl;
    return 0;
}

// int facto(int n){
//     if(n==1){
//         return 1;
//     }
//     else{
//         return n*facto(n-1);
//     }
// }

// Iterative way is best because the Auxilary space was Theta(1)
// Whereas the Recursive way has Theta(n). [The Recursion stack that is used]