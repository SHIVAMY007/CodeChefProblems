#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void classifySeat(int a){
   if(a<=15){
    if(a<=10){
        cout<<"Lower Double";
    }
    else{
        cout<<"Lower Single";
    }
   }
   else{
    if(a<=25){
        cout<<"Upper Double";
    }
    else{
        cout<<"Upper Single";
    }
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
            
          
            classifySeat(a);
           
         cout<<endl;
    }
    
    return 0;
}