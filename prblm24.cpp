#include<iostream>
#include<vector>
using namespace std;
vector<int> reverseTheNumber(vector<int> &v){
    int n = v.size();
    vector<int> temp(n);
    for(int i = n - 1; i >= 0; i--){
        temp[n - i - 1] = v[i]; // Assign v[i] to temp[n-i-1]
    }
    return temp;
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
          vector<int> reversedVec = reverseTheNumber(vec[i]);
        for (int j = 0; j < reversedVec.size(); j++) {
            cout << reversedVec[j] << " ";
        }
           
            
         cout<<endl;
    }
    return 0;
}