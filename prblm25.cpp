#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void SharkTank(int amount1,int amount2){
   float valuation1=amount1*10;
   float valuation2=amount2*5;
   if(valuation1>valuation2){
    cout<<"Close the deal with first shark";
   }
   else if(valuation2>valuation1){
    cout<<"Close the deal with second shark";
   }
   else{
    cout<<"Close the deal with either shark";
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
           
          
            SharkTank(a,b);
           
         cout<<endl;
    }
    
    return 0;
}