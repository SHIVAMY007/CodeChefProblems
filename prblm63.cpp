#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int FloorsToTravel(int a,int b){
       if(a%10==0 && b%10!=0){

       int floorA=a/10;
        int floorB=b/10+1;
        return abs(floorA-floorB);
       }
       else if(a%10!=0 && b%10==0){

       int floorA=a/10+1;
        int floorB=b/10;
        return abs(floorA-floorB);
       }

       else{
        int floorA=a/10+1;
        int floorB=b/10+1;
  
        return abs(floorA-floorB);}
}
int main(){
    int n;
    // cout<<"Enter the number of test cases: ";
    cin>>n;
    // cout<<"Enter your test cases: ";
    vector<vector<int>> arr(n, vector<int>(2)); 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }cout<<endl;
    }

    for (int i = 0; i < n; i++) {
        int a = arr[i][0];
        int b = arr[i][1];
        cout<<FloorsToTravel(a, b);
          
        cout<<endl;
    }
          
return 0;
}