#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int FillCandies(int a,int b,int c){
     float bag=b*c;
    return ceil(a/bag);
   
}
int main(){
    int n;
    // cout<<"Enter the number of test cases: ";
    cin>>n;
    // cout<<"Enter your test cases: ";
    vector<vector<int>> arr(n, vector<int>(3)); 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }cout<<endl;
    }

    for (int i = 0; i < n; i++) {
        int a = arr[i][0];
        int b = arr[i][1];
        int c = arr[i][2];
        
        cout<<FillCandies(a,b,c)<<endl;
    }
          
return 0;
}