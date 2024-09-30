#include<iostream>
#include<vector>
using namespace std;
float TotalProfit(int a){
    float sp = a * 50;
    float sc = 0.2f * sp;
    float mint = 0.2f * sp;
    float shop = 0.3f * sp;
    float total_cost = sc + mint + shop;
    return sp - total_cost;
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

   
    //  cout<<"Total cost to pay";
    for (int i = 0; i < n; i++) {
        
            int a=vec[i][0];
            
            cout<<TotalProfit(a);
           
         cout<<endl;
    }
    return 0;
}