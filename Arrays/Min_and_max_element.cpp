#include <iostream>

using namespace std;

int findmin(int a[], int size){

    int min= a[0];

    for(int i=0; i<size; i++){

        for (int j = i+1; j < size; j++)
        {
             if( a[i]>a[j]){

                min= a[j];
            }
        }
        
    }

    return min;

}

int findmax(int a[], int size){

    int max= a[0];

    for(int i=0; i<size; i++){

        for (int j = i+1; j < size; j++)
            {
             if( a[i]<a[j]){

                max= a[j];
            }
        }
        
    }

    return max;

}
int main(){

    int n;

    cout<<"Enter the size of the array"<<endl;
    cin>>n;


    int arr[n];
    cout<<"Enter the array"<<endl;

    for(int i=0; i<n; i++){

        cin>> arr[i];
    }

    int mi;
    int ma;

  mi= findmin(arr,n);
  ma= findmax(arr,n);

  cout<<"Minimum value"<<" "<<mi<<endl;
  cout<<"Maximum value"<<" "<<ma<<endl;



    return 0;
}