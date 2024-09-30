#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int MinPizzas(int a){
   

    return  ceil(a/4.0);
}

int main() {
    int n;
    cin>>n;
    vector<vector<int>> vec(n,vector<int>(1));
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < 1; j++) {
            int x;
            cin>>x;
            vec[i][j] = x; // Initialize with some values
        }
    }

    // Print the vectors (optional)
    for (int i = 0; i < n; i++) {
        
            int a=vec[i][0];
            
          
            cout<<MinPizzas(a);
           
         cout<<endl;
    }
    
    return 0;
}