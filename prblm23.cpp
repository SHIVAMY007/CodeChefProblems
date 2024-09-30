#include<iostream>
#include<vector>
using namespace std;
void NearestExit(int a){
   if(a<=50){
    cout<<"Left";
   }
   else{
    cout<<"Right";
   }
   
}

int main() {
    int n;
    cin>>n;
    vector<vector<int>> vec(n,vector<int>(1));
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < 1; j++) {
            int x;
            cin>>x;
            vec[i][j] = x; }
    }

   
     cout<<"Nearest exit is:"<<endl;
    for (int i = 0; i < n; i++) {
        
            int a=vec[i][0];
            
        NearestExit(a);
           
         cout<<endl;
    }
    return 0;
}