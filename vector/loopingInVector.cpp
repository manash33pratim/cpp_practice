#include<iostream>
#include<vector>
using namespace std;

int main()
{
 vector <int> v;

 for(int i=0; i<5;i++){
    int element;
    cin>>element;
    v.push_back(element);
 }
    v.pop_back();
    v.end();

for(int ele:v){
    cout<<ele<<" ";}

    
    return 0;


}