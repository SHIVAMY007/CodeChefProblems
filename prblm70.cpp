#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int MaxPolyBags(int a ){
   return ceil(a/10.0);
       
}

int main(){
    int n;
    // cout<<"Enter the number of test cases: ";
    cin>>n;
    // cout<<"Enter your test cases: ";
    vector<vector<int>> arr(n, vector<int>(1)); 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 1; j++) {
            cin >> arr[i][j];
        }cout<<endl;
    }

    for (int i = 0; i < n; i++) {
        int a = arr[i][0];
       
        
       cout<<MaxPolyBags(a);
        cout<<endl;
    }
          
return 0;
}