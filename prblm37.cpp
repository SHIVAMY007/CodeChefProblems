#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int MinMoveToBringInSameDirection(int a,int b){
    
 if(a==0 || b==0){
    
return 0;
 }
 else if(a==b){
    
return 0;
 }
 else{ int m=min(a,b);
    return m;
 }
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
           
          cout<<MinMoveToBringInSameDirection(a,b);
           
         cout<<endl;
    }
    
    return 0;
}