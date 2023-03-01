//sum of two pairs equal which is equal to given value

#include<iostream>

using namespace std;
int main(){

    int a[5],sum,c=0;
    for(int i=0;i<5;i++){

        cin>>a[i];
    }
    cout<<"Enter a number: ";
    cin>>sum;
    
    
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(a[i]+a[j]==sum){

                c++;
            }
                
        }
    }
    cout<<"The number of pairs equal to "<<sum<<" is "<<c;
}