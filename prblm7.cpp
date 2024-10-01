#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int CREDpnts(int a,int b){
    // float avg=(float)(a+b)/2;
    int c=a*b;
   
    
    return c/100;
}
int main(){
    int n;
    cout<<"Enter the number of test cases";
    cin>>n;
    cout<<"Enter your test cases";
    vector<vector<int>> arr(n, vector<int>(2)); // initialize inner vectors with 2 elements

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }cout<<endl;
    }

    for (int i = 0; i < n; i++) {
        int a = arr[i][0];
        int b = arr[i][1];
        
        cout<<CREDpnts(a,b)<<endl;
    }
          
return 0;
}