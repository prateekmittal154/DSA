/* WAP to check whether a given number is a power of 2 or not using BITWISE operators */

#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number to be checked"<<endl;
    cin>>n;

    if(n&(n-1)){
      
      cout<<"False";
    }

    else{
    cout<<"True";
    }

}