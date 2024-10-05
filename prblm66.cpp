#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int MaxNumberOfPtsCanGet(int a,int b){
      
      int sa1=500-(a*2);
      int sb1=1000-((a+b)*4);
       int sab=sa1+sb1;

      int sb2=1000-((b)*4);
      int sa2=500-((a+b)*2);
       int sba=sa2+sb2; 
       return max(sab,sba);
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
        cout<<MaxNumberOfPtsCanGet(a, b);
          
        cout<<endl;
    }
          
return 0;
}