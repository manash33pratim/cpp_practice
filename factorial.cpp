#include<iostream>
using namespace std;


int factorial(int x){

    int a=1;
    for(int i=1;i<=x;i++){

        
        a=a*i;
    }
    return a;

}
int main(){


    // int n,result=1;

    // cin>>n;

    // for(int i=1; i<=n; i++){
    // result=result*i;
    
   // }

    int n;
    cin>>n;

    int y=factorial(n);

    cout<<y;

    return 0;
}

