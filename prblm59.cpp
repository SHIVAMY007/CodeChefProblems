#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int MinCoinsToPay(int x){
    if(a%10==0){
        return a/10;
    }
    else if(a%5==0){
        return a/5;
    }
    else if(a%10==0 && a%5==0){
        
    }
    
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
        
        
        cout<<MinCoinsToPay(a);
        cout<<endl;
    }
          
return 0;
}