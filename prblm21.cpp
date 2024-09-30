#include<iostream>
#include<vector>
using namespace std;
int NumberOfPrblmsGrtThanThsnd(vector<int> v){
    int count=0;
    int n=v.size();
    for(int i=0;i<n;i++){
        if(v[i]>=1000){
          count++;
        }
    }
   
    return count;
}


int main() {
    int n;
    cin>>n;
    
    vector<vector<int>> vec;
     for (int i = 0; i < n; i++) {
       int s;
        cin>>s;
        vector<int> innerVec;
        for (int j = 0; j < s; j++) {
            int x;
            cin>>x;
            innerVec.push_back(x); // Initialize with some values
        }vec.push_back(innerVec);
    }

    // Print the vectors (optional)
    for (int i = 0; i < n; i++) {
        
           cout<<NumberOfPrblmsGrtThanThsnd(vec[i]);
            
         cout<<endl;
    }
    return 0;
}