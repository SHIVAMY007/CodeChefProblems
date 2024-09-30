#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int TimeToCatch(int a,int b){
    int count=0;
 if(b>a){
    while(a!=b){
        a+=2;
        b+=1;
        count++;
    }
return count;
 }
 else if(a>b){
    while(a!=b){
        a-=2;
        b-=1;
        count++;
    }
return count;
 }
 else{
    return 0;
 }
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
           
          cout<<TimeToCatch(a,b);
           
         cout<<endl;
    }
    
    return 0;
}