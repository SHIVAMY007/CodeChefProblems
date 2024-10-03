#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int TotalDurationOfSeries(int a,int b,int c){
    if(a%2!=0){

        int e=a/2;
    int et=e*b;
    int ot=(e+1)*c;
    return et+ot;
    }
    else{
        int e=a/2;
        int et=e*b;
        int ot=e*c;
        return et+ot;
    }
   
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
        
        cout<<TotalDurationOfSeries(a,b,c);
        cout<<endl;
    }
          
return 0;
}