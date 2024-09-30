#include<iostream>
#include<vector>
#include<climits>
using namespace std;
bool JengaTilesGame(int a,int b){
   if(a>b){
    return false;
   }
   if(b%a!=0){
     return false ;
   }
 return true;
}

int main() {
    int n;
    cin>>n;
    vector<vector<int>> vec(n,vector<int>(2));
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            int x;
            cin>>x;
            vec[i][j] = x; // Initialize with some values
        }
    }

    
    for (int i = 0; i < n; i++) {
        
            int a=vec[i][0];
            int b=vec[i][1];
           
          if(JengaTilesGame(a,b)){
            cout<<"Yes";
           }
           else{
            cout<<"No";
           };
         cout<<endl;
    }
    
    return 0;
}