
#include<iostream>

using namespace std;

int findduplicate(int a[], int n){

    int d;

    for(int i=0;i<n-1; i++){

        for(int j=i+1; j<n; j++){

            if(a[i] == a[j]){

                d= a[j];
            }
        }
    }

return d;
}


int main(){
    

#ifndef ONLINE_JUDGE
freopen("inputf.in","r",stdin); //file input.txt is opened in reading mode i.e "r"
freopen("outputf.out","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif

    int n;

    cout<<"Enter the size of the array"<<endl;
    cin>>n;

    int arr[n];
    int res;

    cout<<"Enter the elements of the array"<<endl;

    for(int i=0; i<n; i++){

        cin>> arr[i];
    }


    res= findduplicate(arr,n );

    cout<<"The duplicate element is: "<<res;

    return 0;
}