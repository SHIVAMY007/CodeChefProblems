#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int MaxChocsOneCanBuy(int a,int b){
   int c=a/b;
   int d=a%b;
   return a/b;
}
int main(){
    int n;
    // cout<<"Enter the number of test cases: ";
    cin>>n;
    // cout<<"Enter your test cases: ";
    vector<vector<int>> arr(n, vector<int>(2)); 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }cout<<endl;
    }

    for (int i = 0; i < n; i++) {
        int a = arr[i][0];
        int b = arr[i][1];
        cout<<MaxChocsOneCanBuy(a, b);
          
        cout<<endl;
    }
          
return 0;
}