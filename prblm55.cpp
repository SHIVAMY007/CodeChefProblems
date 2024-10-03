#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void DesiredTemperature(int A,int B,int X,int Y){
     int c=B-A;
     if(c<0){
        if(Y>=abs(c)){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
     }
     else{
        if(X>=c){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
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
        
       DesiredTemperature(a,b,c,d);
        cout<<endl;
    }
          
return 0;
}