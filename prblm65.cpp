#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int IncrDecr(int a){
    return (a%4==0)?a+1:a-1;
   
}

int main(){
    int n;

    cin>>n;
    cout<<IncrDecr(n);
    
          
return 0;
}