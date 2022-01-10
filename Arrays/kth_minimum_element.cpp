#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void findkthmin(int a[], int n, int q){

    std::sort(a,a+n);

    cout<<"The kth minimum element is: "<<a[q-1];
}


int main(){

    int size;

    cout<<"Enter the size of the array";
    cin>>size;

    int arr[size];

    cout<<"Enter the elements of the array"<<endl;

    for(int i=0; i<size; i++){

        cin>>arr[i];

    }

    int k;

    cout<<"Enter the value of k"<<endl;
    cin>>k;

    findkthmin(arr, size, k);

    return 0;

}