#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int reqdThirdCard(int a,int b){
   int r=a+b;
   int c=21-r;
   if(c>10){
    return -1;
   }
   else{
    return c;
   }
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
        cout<<reqdThirdCard(a, b);
          
        cout<<endl;
    }
          
return 0;
}