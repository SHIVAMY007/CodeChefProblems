#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool ASNGMNT(int a){
    // float avg=(float)(a+b)/2;
   if((10-a)>=3) {
    return true;
   }
    
    return false;
}
int main(){
    int n;
    cout<<"Enter the number of test cases";
    cin>>n;
    cout<<"Enter your test cases";
    vector<vector<int>> arr(n, vector<int>(1)); // initialize inner vectors with 1 elements

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 1; j++) {
            cin >> arr[i][j];
        }cout<<endl;
    }

    for (int i = 0; i < n; i++) {
        int a = arr[i][0];
        // int b = arr[i][1];
        
        // cout<<ASNGMNT(a,b)<<endl;
        if (ASNGMNT(a)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
          
return 0;
}