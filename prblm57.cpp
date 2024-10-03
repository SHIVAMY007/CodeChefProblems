#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int NoOfAppsToBeRemoved(int S,int X,int Y,int Z){
    int a=X+Y;
    int b=S-a;
    if(Z<=b){
        return 0;
    }
    else if((S-X)>=Z or (S-Y)>=Z){
         return 1;
    }
   
    else{
        return 2;
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
        
       cout<<NoOfAppsToBeRemoved(a,b,c,d);
        cout<<endl;
    }
          
return 0;
}