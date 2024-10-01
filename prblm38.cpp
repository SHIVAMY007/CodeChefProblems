#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int MinPeopleCanBath(int a,int b){
    int c=a/b;
    return (c/2);

}

int main() {
    int n;
    cin>>n;
    vector<vector<int>> vec(n,vector<int>(2));
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            int x;
            cin>>x;
            vec[i][j] = x; // Initialize with some values
        }
    }

    
    for (int i = 0; i < n; i++) {
        
            int a=vec[i][0];
            int b=vec[i][1];
           
          cout<<MinPeopleCanBath(a,b);
           
         cout<<endl;
    }
    
    return 0;
}