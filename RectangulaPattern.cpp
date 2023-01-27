//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    int m;

    cin>>n>>m;

    for(int i=1; i<=n; i++){

        for(int j=1;j<=m;j++){


            if(i==1 || i==n || j==1 || j==m){
                cout<<"*";//for printing *

            }
            else
            cout<<" ";//FOR PRINTING " "/////////////
        }
        cout<<endl;
    }
}



