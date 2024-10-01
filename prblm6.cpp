#include <iostream>
#include <vector>
using namespace std;
bool war(vector<int> v){
    int n = v.size();
    int e=0;
    int o=0;
    for(int i=0;i<n;i++){
        if(v[i]%2==0){
            e++;
        }else{
            o++;
        }
    }
    return e>o;
}

int main(){
int n;
 cout<<"Enter the number of soldiers";
  cin>>n;
   cout<<"Enter the weapon numbers for all soldiers";
   vector<int>  v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   if(war(v)){
    cout<<"LET THE BATTLE BEGIN";
   }
   else{
    cout<<"NOT READY";
   }

return 0;
}