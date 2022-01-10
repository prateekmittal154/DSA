#include<iostream>

using namespace std;

int issorted(int arr[], int n){

    int res=1;

    for(int i=0; i<n; i++){

        if(arr[i+1] < arr[i] ) 
        {
        res=0;
        break;
        }
    }

    return res;
}

int main(){

    int n=5;
    int arr[5]={3,1,4,5,8};

    int ans= issorted(arr,n);

    if(ans==1) cout<<"sorted";
    if(ans==0) cout<<"not sorted";

    return 0;


}