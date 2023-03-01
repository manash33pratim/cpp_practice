#include<iostream>
using namespace std;
int main(){

    int a;
    cin>>a;

    for(int i=2;i<=a;i++){
        for(int j=2;j<=a/2;j++){
            if(i%j!=0){
                    
                    cout<<i<<" ";
                    break;
            }
        
        }
    }
    return 0;

}