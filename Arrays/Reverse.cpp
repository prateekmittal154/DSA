#include <iostream>

using namespace std;

void reversearray( int arr[], int s, int e){

    while(s<e){

        int temp= arr[s];
        arr[s]=arr[e];
        arr[e]=temp;

        s++;
        e--;
    }

}

void printarray(int arr[], int size){

    for (int i = 0; i <size; i++)
    {
        /* code */
        cout<< arr[i]<<endl;
    }

}

int main(){

    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;

    int a[n];

    int start = 0;
    int end= n-1;

    cout<<"Enter the array"<<endl;

    for(int i=0; i<n; i++){

        cin>> a[i];
    }

    
    reversearray(a,start,end);

    cout<<" The array after reversal is"<<endl;
    printarray(a,n);
}