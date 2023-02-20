#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> v;

    for(int i=0;i<5;i++){

        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    int x,ans=0;
    cout<<"Enter the number: ";
    cin>>x;

    for( int e=0;e<5;e++){
        if(v[e]==x){
        ans++;
        }
    }
    cout<<ans;
    return 0;
}

