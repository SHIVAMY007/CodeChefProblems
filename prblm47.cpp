#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int SquareRoots(int x){
     if (x == 0) return 0;
    int lo = 1;
    int hi = x;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
         int a = mid * mid;
        if (a == x) {
            return mid;
        } else if (a < x) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return lo - 1;
}
int main(){
    int n;
    cout<<"Enter the number of test cases: ";
    cin>>n;
    cout<<"Enter your test cases: ";
    vector<vector<int>> arr(n, vector<int>(1)); 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 1; j++) {
            cin >> arr[i][j];
        }cout<<endl;
    }

    for (int i = 0; i < n; i++) {
        int a = arr[i][0];
        
        
        cout<<SquareRoots(a)<<endl;
    }
          
return 0;
}