#include<iostream>
#include<vector>
using namespace std;
bool EnoughEnrgyOrNot(int a,int b,int c,int d){
    
    int p=a*b;
    int q=c*d;
   
    return (q>=p);
}


int main() {
    int n;
    cin>>n;
    vector<vector<int>> vec(n,vector<int>(4));
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
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
            int d=vec[i][3];
           if(EnoughEnrgyOrNot(a,b,c,d)){
            cout<<"YES";
           }
           else{
            cout<<"NO";
           };
         cout<<endl;
    }
    return 0;
}