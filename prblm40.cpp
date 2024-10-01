#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int Calculatefactorial(int a){
 if(a==0){
    return 1;
 }
 else{
    return a*Calculatefactorial(a-1);
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
            vec[i][j] = x; // Initialize with some values
        }
    }

    // Print the vectors (optional)
    for (int i = 0; i < n; i++) {
        
            int a=vec[i][0];
            
          
            cout<<Calculatefactorial(a);
           
         cout<<endl;
    }
    
    return 0;
}