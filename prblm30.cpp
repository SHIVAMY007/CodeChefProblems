#include<iostream>
#include<vector>
using namespace std;
bool MarksPossibleOrNot(int a,int b,int c){
    if(c==0){
        return true;
    }
    for(int i=1;i<=a;i++){
        if((b*i)==c){
            return true;
        }
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
           
           if(MarksPossibleOrNot(a,b,c)){
            cout<<"Yes";
           }
           else{
            cout<<"No";
           };
         cout<<endl;
    }
    return 0;
}