
/* WAP to input two integers n and k.And, check if the kth bit in n is set or not using bitwise operators */

#include<iostream>
using namespace std;

int main(){


    int n,k;
    cout<<"Enter the number to be checked"<<endl;
    cin>>n;

    cout<<"Enter the bit to be checked"<<endl;
    cin>>k;

    if(n>>(k-1)&1 !=0){

        cout<<"The kth bit of n is set"<<endl;
    }

    else
    cout<<"The kth bit is not set";
}
