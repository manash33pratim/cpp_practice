#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Number of elements: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }

    }
    cout<<"max element is "<<max;

    return 0;
}