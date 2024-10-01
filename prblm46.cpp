#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool CandiesDistribution(int a,int b){
    return a % b == 0 && (a / b) % 2 == 0;
}
int main(){
    int n;
    cout<<"Enter the number of test cases: ";
    cin>>n;
    cout<<"Enter your test cases: ";
    vector<vector<int>> arr(n, vector<int>(2)); 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }cout<<endl;
    }

    for (int i = 0; i < n; i++) {
        int a = arr[i][0];
        int b = arr[i][1];
        if (CandiesDistribution(a, b)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        cout<<endl;
    }
          
return 0;
}