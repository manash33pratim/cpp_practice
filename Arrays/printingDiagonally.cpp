#include<iostream>

using namespace std;

int main(){

int array[]={1,2,7,3,4,5};

int lengthOfArray=sizeof(array)/sizeof(array[0]); 

for(int i=0;i<lengthOfArray;i++){
    
   for(int j=0;j<i;j++){
    cout<<" ";
   }
   
   cout<<array[i]<<endl;
}



return 0;
}