#include<iostream>
#include<vector>
using namespace std;
int TotalCost(int a){
   
   if(a<=100){return a;}
   if(a>100 && a<=1000){return (a-25);}
   if(a>1000 && a<=5000){return (a-100);}
   else{
    return(a-500);
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

   
     cout<<"Total cost to pay";
    for (int i = 0; i < n; i++) {
        
            int a=vec[i][0];
            
            cout<<TotalCost(a);
           
         cout<<endl;
    }
    return 0;
}