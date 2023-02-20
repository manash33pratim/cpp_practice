#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector <int> v;

    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    v.resize(8);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

     v.insert(v.begin()+1,5);
     cout<<"size: "<<v.size()<<endl;
     cout<<"capacity: "<<v.capacity()<<endl;

     v.resize(15);
     cout<<"size: "<<v.size()<<endl;
     cout<<"capacity: "<<v.capacity()<<endl;

     v.pop_back();
     cout<<"size: "<<v.size()<<endl;
     cout<<"capacity: "<<v.capacity()<<endl;
     
     v.pop_back();
     cout<<"size: "<<v.size()<<endl;
     cout<<"capacity: "<<v.capacity()<<endl;
    v.end();
    cout<<"size: "<<v.size()<<endl;
     cout<<"capacity: "<<v.capacity()<<endl;


     


    //cout<<v;

    return 0;

}