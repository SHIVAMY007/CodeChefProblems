#include<iostream>
#include<vector>
using namespace std;
bool QualifyOrNot(int a,int b,int c){
    int d=b+2*c;
   if(d>=a){
    return true;
   }
   
    return false;
}


int main() {
    int n;
    cin>>n;
    vector<vector<int>> vec(n,vector<int>(3));
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            int x;
            cin>>x;
            vec[i][j] = x; // Initialize with some values
        }
    }

    // Print the vectors (optional)
    for (int i = 0; i < n; i++) {
        
            int a=vec[i][0];
            int b=vec[i][1];
            int c=vec[i][2];
           
           if(QualifyOrNot(a,b,c)){
            cout<<"Qualify";
           }
           else{
            cout<<"Not Qualify";
           };
         cout<<endl;
    }
    return 0;
}