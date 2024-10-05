#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void Secondlargest(int a,int b,int c){
      int cm=b*3;
      int im=((a-b)*-1);
      int tm=cm+im;
      if(tm>=c){
        cout<<"Pass";
      }else{
        cout<<"Fail";
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
        
       Secondlargest(a,b,c);
        cout<<endl;
    }
          
return 0;
}