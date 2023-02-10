#include<iostream>
using namespace std;

int main(){
    int n;
    

    cin>>n;
    for(int i=1; i<=n; i++){

        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }

        for(int j=0;j<2*j+1;j++){

            if(j==0||j==i-1||i==n){
                cout<<i;

            }
            else if(j>0 && j<i-1)
                cout<<" ";
            }



        }
        cout<<endl;

 return 0;
    }

    // for(int i=1; i<=n; i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<" ";
    //         }
    //     for(int j=1;j<=i;j++){
            
    //         if(j==1 || j==i || i==n)
    //         {cout<<i;}
    //         else 
    //         {
    //             cout<<" ";
    //         }

            
    //         }
    //         cout<<endl;
    
    // }
   

