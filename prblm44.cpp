#include<iostream>
#include<vector>
#include<string>
using namespace std;
std::string DNASequence(std::string str) {
    for (char& c : str) {
        if (c == 'A') {
            c = 'T';
        } else if (c == 'T') {
            c = 'A';
        } else if (c == 'C') {
            c = 'G';
        }
         else if (c == 'G') {
            c = 'C';
        }
    }
    return str;
}

int main() {
    int n;
    cin >> n;
    
    vector<string> vec(n);
    for (int i = 0; i < n; i++) {
        
            string x;
            cin >> x;
           vec[i]=x; 
        }
  
        
  
    for (int i = 0; i < n; i++) {
        
          string Changed=DNASequence(vec[i]);
          cout<<Changed;
           
         cout<<endl;
    }
    return 0;
}