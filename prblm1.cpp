#include <iostream>
#include <vector>
using namespace std;
bool GreatAvg(int a,int b,float c){
    // float avg=(float)(a+b)/2;
    float avg=(a+b)/2.0;
    if(avg>c){
        return true;
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter the number of test cases";
    cin>>n;
    cout<<"Enter your test cases";
    vector<vector<int>> arr(n, vector<int>(3)); // initialize inner vectors with 3 elements

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }cout<<endl;
    }

    for (int i = 0; i < n; i++) {
        int a = arr[i][0];
        int b = arr[i][1];
        float c = arr[i][2];
        if (GreatAvg(a, b, c)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
          
return 0;
}