#include <iostream>

using namespace std;

void sort(int a[], int size){

    int low=0;
    int mid=0;
    int high=size-1;

    for(int i=0; i<high; i++){

        if(a[i]==0){

            int temp;
            temp=a[i];
            a[i]=a[low];
            a[low]=temp;

            low++;
        }

        else if(a[i]==2){

            int temp;
            temp=a[i];
            a[i]=a[high];
            a[high]=temp;

            high--;
        }

        else{
            mid++;
        }

    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.out", "w", stdout);
    #endif


    int n;

    cout<<"Enter the size of the array"<<endl;
    cin>>n;

    int arr[n];
    

    cout<<"Enter the elements of the array"<<endl;

    for(int i=0; i<n; i++){

        cin>> arr[i];
    }

    sort(arr,n);

    cout<<"The sorted array is: "<<endl;

    for(int i=0; i<n; i++){

        cout<<arr[i]<<" ";
    }

    return 0;

}