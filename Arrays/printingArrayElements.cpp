#include<iostream>

using namespace std;

int main(){

int array[]={1,2,7,3,4,5};

int a=sizeof(array)/sizeof(array[0]);

for(int i=0;i<a;i++){
    
   
   cout<<array[i]<<endl;
}



return 0;
}