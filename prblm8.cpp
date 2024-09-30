#include<iostream>
#include<vector>
using namespace std;
bool WaterFillTime(int a,int b,int c){
    int count=0;
   if(a==0){count++;}
   if(b==0){count++;}
   if(c==0){count++;}


    return count>1;
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
           if(WaterFillTime(a,b,c)){
            cout<<"Water filling time ";
           }
           else{
            cout<<"not now";
           };
         cout<<endl;
    }
    return 0;
}