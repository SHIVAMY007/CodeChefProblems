#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void Vehicles(int a,int b){
   
    if(a==b){
        cout<<"Same";
       
       
    }
    else if(a>b){
        cout<<"Bike";
        
        
    }
    else{
        cout<<"car";
        
        
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

    // Print the vectors (optional)
    for (int i = 0; i < n; i++) {
        
            int a=vec[i][0];
            int b=vec[i][1];
            // int c=vec[i][2];
          
            Vehicles(a,b);
           
         cout<<endl;
    }
    
    return 0;
}