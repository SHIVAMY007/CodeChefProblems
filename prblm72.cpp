#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void CyclicQuad(float a,float b,float x,float y){
        float sa=a/x;
        float sb=b/y;
        if(sa==sb){
            cout<<"BOTH";
        }
        else if(sa>sb){
            cout<<"Chefina";
        }
        else {
            cout<<"Chef";
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
        
       CyclicQuad(a,b,c,d);
        cout<<endl;
    }
          
return 0;
}