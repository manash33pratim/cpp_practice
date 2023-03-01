
/*Finding the last occurance in a vector
 In a vector v elements are 1, 2 ,1, 3, 4. Here
1 is occuring 2 times . we have to find last 1's position 
that is 3.
*/

//1
// #include<iostream>
// #include<vector>

// using namespace std;



// int last(int x, vector <int> y){
//     int ans;
//     for(int i=0;i<5;i++){
//         if(y[i]==x){
//             ans=i+1;
//             //break;
//     }

    
//     }
//     return ans;
// }
// int main(){
//     vector <int> v;
//     for(int i=0;i<5;i++){
//         int a=0;
//         cin>>a;
//         v.push_back(a);
//     }

//     int a;
//     cout<<"Enter a digit : ";
//     cin>>a;

    
//     int ans;
//     ans=last(a,v);
//     cout<<ans;
//     return 0;
// }



//2
#include<iostream>
#include<vector>

using namespace std;




int main(){
    vector <int> v;
    for(int i=0;i<5;i++){
        int a=0;
        cin>>a;
        v.push_back(a);
    }

    int x,ans;
    cout<<"Enter a digit : ";
    cin>>x;

    for(int i= v.size()-1;i>=0;i--){
        if(v[i]==x){
            ans=i+1;
            break;
        }
    }
    
    
    cout<<ans;
    return 0;
}

