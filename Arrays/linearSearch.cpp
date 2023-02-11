#include<iostream>
using namespace std;

int main(){
   int arr[]={3,6,7,5,9,12,45,34},n;
    int length=sizeof(arr)/sizeof(arr[0]);
   cin>>n;

    for(int i=0;i<length;i++){
        if(arr[i]==n){
            cout<<i+1<<endl;
            break;
    }
    
}
return 0;
}

