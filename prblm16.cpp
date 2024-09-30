#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int CandyPacks(int a,int b){
    int c=a-b;
    if(c<0){
        return 0;
    }
    int p=ceil(c/4.0);

    return p;
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

    // Print the vectors (optional)
    for (int i = 0; i < n; i++) {
        
            int a=vec[i][0];
            int b=vec[i][1];
            // int c=vec[i][2];
          
            cout<<CandyPacks(a,b);
           
         cout<<endl;
    }
    
    return 0;
}