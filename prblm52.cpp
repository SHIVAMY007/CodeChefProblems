#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int chessBoardDist(int x1,int y1,int x2,int y2){
     int a=abs(x1-x2);
     int b=abs(y1-y2);
    return max(a,b);
   
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
        
        cout<<chessBoardDist(a,b,c,d)<<endl;
    }
          
return 0;
}