// Program to calculate sum of first n naatural numbers
// Written by Meghanath Reddy Chavva
#include<iostream>
using namespace std;

int main(){
    int n,sum;
    cout<<"Enter the value of n:";
    cin>>n;
    sum = (n)*(n+1)/2;
    cout<<"Sum of first "<<n<<" Natural numbers is "<<sum<<endl;
    return 0;
}

// We have used the direct formula for the sum, giving the time complexity Theta(1)
// Using Iterative way, that is looping through 1 to n, adding them gives Theta(n)