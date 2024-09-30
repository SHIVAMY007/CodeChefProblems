#include<iostream>
#include<vector>
using namespace std;
int TotalNotebooks(int a){
   
    return(a*10);
   
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

   
     cout<<"Total number of notebooks are:"<<endl;
    for (int i = 0; i < n; i++) {
        
            int a=vec[i][0];
            
            cout<<TotalNotebooks(a);
           
         cout<<endl;
    }
    return 0;
}