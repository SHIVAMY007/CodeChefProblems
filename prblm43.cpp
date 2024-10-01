#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int MinMatchToWin(int a,int b){
    int ptr=b-a;
    return (ceil(ptr/8.0));
 
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
           
          cout<<MinMatchToWin(a,b);
           
         cout<<endl;
    }
    
    return 0;
}