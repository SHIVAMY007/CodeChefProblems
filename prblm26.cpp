#include<iostream>
#include<vector>

using namespace std;
bool GoodProgram(int nibbles){
  if(nibbles%4==0){
    return true;
  }
 return false;
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

    
    for (int i = 0; i < n; i++) {
        
            int a=vec[i][0];
            // int b=vec[i][1];
           
          
            if(GoodProgram(a)){
                cout<<"Good";
            }
            else{
                cout<<"Not Good";
            };
           
         cout<<endl;
    }
    
    return 0;
}