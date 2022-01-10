/* Wap to count the number of set bits in a given number */

#include<iostream>
using namespace std;

int main(){

    cout<<"enter the number";
    int n;
    int sum=0;
    cin>> n;

    for(int k=1; k<32;k++){

        if(n>>(k-1)&1 !=0){
            sum+=1;
        }
    }

    cout<<"the number of set bits in the number are :"<<" "<<sum;

}