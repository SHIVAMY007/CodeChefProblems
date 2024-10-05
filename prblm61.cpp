#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;
int NoOfplayersEligible(vector<int>v){
      int count=0;
      
    for(int age : v){
        if(age>=10 && age<=60){
            count++;
        }
      }
      return count;
}
int main(){
    int n;
    // cout<<"Enter the number of test cases: ";
    cin>>n;
    // cout<<"Enter your test cases: ";
    vector<vector<int>> arr; 
    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        vector<int> inner;
        for (int j = 0; j < x; j++) {
            int age;
            cin >> age;
            inner.push_back(age);
        }
        arr.push_back(inner);
        cout<<endl;
    }

    for (int i = 0; i < n; i++) {
        // int a = arr[i][0];
        // int b = arr[i][1];
        cout<<NoOfplayersEligible(arr[i]);
          
        cout<<endl;
    }
          
return 0;
}