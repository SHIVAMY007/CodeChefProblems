#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void CanWeigh(int W,int X,int Y,int Z){
    if(W==X+Y+Z or W==X+Y or W==Y+Z or W==X+Z or W==X or W==Y or W==Z){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
   
}
int main(){
    int n;
    // cout<<"Enter the number of test cases: ";
    cin>>n;
    // cout<<"Enter your test cases: ";
    vector<vector<int>> arr(n, vector<int>(4)); 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }cout<<endl;
    }

    for (int i = 0; i < n; i++) {
        int a = arr[i][0];
        int b = arr[i][1];
        int c = arr[i][2];
        int d = arr[i][3];
        
       CanWeigh(a,b,c,d);
        cout<<endl;
    }
          
return 0;
}